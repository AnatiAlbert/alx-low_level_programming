#include "main.h"

/**
 * read_textfile - reads text file and prints it
 * @filename: string represnting file name
 * @letters: number of letters it should read and print
 * Return: actual number of letters read or 0 for error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fldr;
	ssize_t rd_, wrt;
	char *baf;

	if (filename == NULL)
		return (0);
	fldr = open(filename, O_RDONLY);
	if (fldr == -1)
		return (0);

	baf = mallloc(sizeof(char) * letters);
	if (baf == NULL)
	{
		close(fldr);
		return (0);
	}
	rd_ = read(fldr, baf, letters);
	close(fldr);
	if (rd_ == -1)
	{
		free(baf);
		return (0);
	}
	wrt = write(STDOUT_FILENO, baf, rd_);
	free(baf);
	if (rd_ != wrt)
		return (0);
	return (wrt);
}
