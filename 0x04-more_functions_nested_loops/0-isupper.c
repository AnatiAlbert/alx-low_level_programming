#include "main.h"
/**
 * _isupper - it checks for uppercase character.
 * @c: values to be targeted for check.
 * Return: 1 or 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}