#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other charracter of a string
 * @str: target string to be manipulated
 */
void puts2(char *str)
{
	int c1 = 0;
	int lent = strlen(str);

	for (c1 = 0; c1 < lent; c1 = c1 + 2)
	{
		_putchar(str[c1]);
	}
	_putchar('\n');
}
