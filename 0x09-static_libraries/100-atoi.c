#include "main.h"

/**
 * _atoi - convert string to an integer
 * @s: target string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
	int c1 = 0;
	unsigned int n1 = 0;
	int m1 = 1;
	int i1 = 0;

	while (s[c1])
	{
		if (s[c1] == 45)
		{
			m1 = m1 * -1;
		}
		while (s[c1] >= 48 && s[c1] <= 57)
		{
			i1 = 1;
			n1 = (n1 * 10) + (s[c1] - '0');
			c1++;
		}
		if (i1 == 1)
		{
			break;
		}
		c1++;
	}
	n1 = n1 * m1;
	return (n1);
}
