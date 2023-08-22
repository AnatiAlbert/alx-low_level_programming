#include "main.h"

/**
 * puts2 - prints every other charracter of a string
 * @str: target string to be manipulated
 */
void puts2(char *str)
{
	int c1 = 0;

	while (str[c1] != '\0')
	{
		_putchar(str[c1]);
		c1 = c1 + 2;
	}
	_putchar('\n');
}
