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
	int c2;

	for (c1 = 0, c2 = len - 1; c1 < c2; c1++, c2--)
	{
		char word = s[c1];

		s[c1] = s[c2];
		s[c2] = word;
	}
}
