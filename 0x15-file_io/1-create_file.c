#include "main.h"

/**
 * create_file - create a file
 * @filename: is the name of file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fds, wrt, brt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (brt = 0; text_content[brt];)
			brt++;
	}

	fds = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	wrt = write(fds, text_content, brt);

	if (fds == -1 || wrt == -1)
		return (-1);

	close(fds);

	return (1);
}
