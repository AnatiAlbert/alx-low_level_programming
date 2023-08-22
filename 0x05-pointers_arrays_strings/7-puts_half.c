#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: target string to be halfed
 */
void puts_half(char *str)
{
	int c1 = 0;
	int c2;

	while (str[c1] != '\0')
	{
		c1++;
	}
	if (c1 % 2 != 0)
	{
		c2 = (c1 - 1) / 2;
		c2++;
	}
	else
	{
		c2 = c1 / 2;
	}

	for (; c2 < c1; c2++)
	{
		_putchar(str[c2]);
	}
	_putchar('\n');
}
