#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: contains value to be checked.
 *
 * Return: 1 for alphabet, 0 for not
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
