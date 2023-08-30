#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	int lt;

	for (lt = 0; s[lt] != '\0'; lt++)
	{
		_putchar(s[lt]);
	}
	_putchar('\n');
}
