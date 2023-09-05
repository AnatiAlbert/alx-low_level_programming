#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments
 * @ac: integer value
 * @av: string array
 * Return: returns a pointer
 */
char *argstostr(int ac, char **av)
{
	int x, y;
	int u = 0, v = 0;
	char *ch;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			v++;
	}
	v = v + ac;

	ch = malloc(sizeof(char) * v + 1);
	if (ch == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			ch[u] = av[x][y];
			u++;
		}
		if (ch[u] == '\0')
		{
			ch[u++] = '\n';
		}
	}
	return (ch);
}
