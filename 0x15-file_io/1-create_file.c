#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: is the string to write to file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fild, nl, rw;

	if (!filename)
		return (-1);

	fild = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fild == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (nl = 0; text_content(nl); nl++)
		;
	rw = write(fild, text_content, nl);
	if (rw == -1)
		return (-1);
	close(fild);
	return (1);
}
