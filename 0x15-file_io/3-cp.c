#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *crt_buf(char *fil);
void cls_fil(int fd);

/**
 * crt_buf - provides 1024 bytes for a buffer
 * @fil: name of file bufferstoring chars
 * Return: pointer to the newly-allocated buffer
 */
char *crt_buf(char *fil)
{
	char *bufa;

	bufa = malloc(sizeof(char) * 1024);

	if (bufa == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fil);
		exit(99);
	}
	return (bufa);
}

/**
 * cls_fil - closes file descriptors
 * @fd: file descriptor to be closed
 */
void cls_fil(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies contents of file to another file
 * @argc: number of arguments supplied to program
 * @argv: array of pointers to arguments
 * Return: 0 for success
 *
 * Description: if argument count is incorrect - exit code 97
 * If file_from does not exist or cannot be read - exit code 98
 * If file_to cannot be created or written to - exit code 99
 * If file_to or file_from cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
	int frm, too, rd, wrt;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = crt_buf(argv[2]);
	frm = open(argv[1], O_RDONLY);
	rd = read(frm, buff, 1024);
	too = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wrt = write(too, buff, rd);
		if (too == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rd = read(frm, buff, 1024);
		too = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buff);
	cls_fil(frm);
	cls_fil(too);

	return (0);
}
