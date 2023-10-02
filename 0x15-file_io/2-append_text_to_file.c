#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 * @filename: name of file
 * @text_content: string to add at end of file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fds, wrt, brt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[brt])
			brt++;
	}

	fds = open(filename, O_WRONLY | O_APPEND);
	wrt = write(fds, text_content, brt);

	if (fds == -1 || wrt == -1)
		return (-1);

	close(fds);

	return (1);
}
