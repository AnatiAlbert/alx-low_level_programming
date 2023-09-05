#include "main.h"
#include <stdlib.h>

/**
 * word_enum - to count number of words
 * @s: target string
 * Return: number of words
 */
int word_enum(char *s)
{
	int pol, e, r;

	pol = 0;
	r = 0;

	for (e = 0; s[e] != '\0'; e++)
	{
		if (s[e] == ' ')
			pol = 0;
		else if (pol == 0)
		{
			pol = 1;
			r++;
		}
	}
	return (r);
}
/**
 * strtow - splits a string into words
 * @str: target string to be splitted
 * Return: returns a pointer
 */
char **strtow(char *str)
{
	char **code, *bmp;
	int i, l = 0, lat = 0, wrds, c = 0, begin, end;

	while (*(str + lat))
		lat++;
	wrds = word_enum(str);
	if (wrds == 0)
		return (NULL);
	code = (char **)malloc(sizeof(char *) * (wrds + 1));
	if (code == NULL)
		return (NULL);
	for (i = 0; i <= lat; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				bmp = (char *)malloc(sizeof(char) * (c + 1));
				if (bmp == NULL)
					return (NULL);
				while (begin < end)
					*bmp++ = str[begin++];
				*bmp = '\0';
				code[l] = bmp - c;
				l++;
				c = 0;
			}
		}
		else if (c++ == 0)
			begin = i;
	}
	code[l] = NULL;
	return (code);
}
