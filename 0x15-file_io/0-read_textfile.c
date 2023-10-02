#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints
 * @filename: text file being read
 * @letters: number of letters it should read
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fds, wrt, rd;
	char *bufa;

	fds = open(filename, O_RDONLY);

	if (fds == -1)
		return (0);

	bufa = malloc(sizeof(char) * letters);
	rd = read(fds, bufa, letters);
	wrt = write(STDOUT_FILENO, bufa, rd);

	free(bufa);
	close(fds);
	return (wrt);
}
