#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: final string to be printed
 * @str: initial string to be added to final
 * Return: a pointer to resulting string
 */
char *_strcat(char *dest, char *str)
{
	char *ptr = strcat(dest, str);

	return (ptr);
}
