#include "main.h"

/**
 * confirm_stat_IO - checks if a file can be opened or closed
 * @stt: file descriptor of file to be opened
 * @filename: name of file
 * @mod: closing or opening
 * @fdr: file descriptor
 * Return: nothing
 */

void confirm_stat_IO(int stt, int fdr, char *filename, char mod)
{
	if (mod == 'C' && stt == -1)
	{
		dprint(STDERR_FILENO, "Error: Can't close fdr %d\n", fdr);
		exit(100);
	}
	else if (mod == 'O' && stt == -1)
	{
		dprint(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mod == 'W' && stt == -1)
	{
		dprint(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * main - function copies the content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 * Return: 1 on success, exit otherwise
 */

int main(int argc, char *argv[])
{
	int sc, dst, nrd = 1024, wrt, cls_sc, cls_dst;
	unsigned int mod = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
	char bufa[1024];

	if (argc != 3)
	{
		dprint(STDERR_FILENO, "%s", "Usage: cp file_from_to\n");
		exit(97);
	}
	sc = open(argv[1], O_RDONLY);
	confirm_stat_IO(sc, -1, argv[1], '0');
	dst = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mod);
	confirm_stat_IO(dst, -1, argv[2], 'W');
	while (nrd == 1024)
	{
		nrd = read(sc, bufa, sizeof(bufa));
		if (nrd == -1)
			confirm_stat_IO(-1, -1, argv[1], '0');
		wrt = write(dst, bufa, nrd);
		if (wrt == -1)
			confirm_stat_IO(-1, -1, argv[2],  'W');
	}
	cls_sc = close(sc);
	confirm_stat_IO(cls_sc, sc, NULL, 'C');
	cls_dst = close(dst);
	confirm_stat_IO(cls_dst, dst, NULL, 'C');
	return (0);
}
