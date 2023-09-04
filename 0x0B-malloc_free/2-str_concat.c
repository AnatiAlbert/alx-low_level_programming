#include "main.h"
#include <stdlib.h>
/**
 * str_concat:
 * @s1: first string
 * @s2: second string
 * Return: returns a pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *final;
	int t, r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	t = 0;
	r = 0;
	while (s1[t] != '\0')
		t++;
	while (s2[r] != '\0')
		r++;
	final = malloc(sizeof(char) * (t + r + 1));

	if (final == NULL)
		return (NULL);
	t = 0;
	r = 0;
	while (s1[t] != '\0')
	{
		final[t] = s1[t];
		t++;
	}
	while (s2[r] != '\0')
	{
		final[t] = s2[r];
		t++, r++;
	}
	final[t] = '\0';
	return (final);
}
