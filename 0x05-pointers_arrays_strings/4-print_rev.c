#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: target string value to used
 */
void print_rev(char *s)
{
	int c1 = 0;

	while (s[c1] != '\0')
	{
		c1++;
	}

	for (c1 = c1 - 1; c1 >= 0; c1--)
	{
		_putchar(s[c1]);
	}
	_putchar('\n');
}
