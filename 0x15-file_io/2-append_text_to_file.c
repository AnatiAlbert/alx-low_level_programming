#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: string to be added to the end of file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fild, nl, rw;

	if (!filename)
		return (-1);

	fild = open(filename, O_WRONLY | O_APPEND);
	if (fild == -1)
		return (-1);

	if (text_content)
	{
		for (nl = 0; text_content[nl]; nl++)
			;
		rw = write(fild, text_content, nl);
		if (rw == -1)
			return (-1);
	}
	close(fild);

	return (0);
}
