#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: target string to be reversed
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int c1;

	for (c1 = len - 1; c1 >= 0; c1--)
	{
		_putchar(s[c1]);
	}
}
