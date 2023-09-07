#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first target string
 * @s2: second target string
 * @n: number of bytes
 * Return: returns a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pt;
	unsigned int m = 0, r = 0, ln1 = 0, ln2 = 0;

	while (s1 && s1[ln1])
		ln1++;
	while (s2 && s2[ln2])
		ln2++;

	if (n < ln2)
		pt = malloc(sizeof(char) * (ln1 +  n + 1));
	else
		pt = malloc(sizeof(char) * (ln1 + ln2 + 1));

	if (!pt)
		return (NULL);

	while (m < ln1)
	{
		pt[m] = s1[m];
		m++;
	}
	while (n < ln2 && m < (ln1 + n))
		pt[m++] = s2[r++];
	while (n >= ln2 && m < (ln1 + ln2))
		pt[m++] = s2[r++];

	pt[m] = '\0';

	return (s2);
}
