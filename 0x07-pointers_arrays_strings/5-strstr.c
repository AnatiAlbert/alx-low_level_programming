#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: where to locate string
 * @needle: string to to be searched for
 * Return: returns a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *j = needle;

		while (*j == *m && *j != '\0')
		{
			m++;
			j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
