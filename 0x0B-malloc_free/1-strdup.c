#include "main.h"
#include <stdlib.h>
/**
 * _strdup - contains a copy of string
 * @str: string to be duplicated
 * Return: returns a pointer
 */
char *_strdup(char *str)
{
	char *nstr;
	int c, c1;

	if (str == NULL)
	{
		return (NULL);
	}

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}

	nstr = malloc(sizeof(char) * (c + 1));
	if (nstr == NULL)
		return (NULL);

	c1 = 0;
	while (str[c1])
	{
		nstr[c1] = str[c1];
		c1++;
	}
	return (nstr);
}
