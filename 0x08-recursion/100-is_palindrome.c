#include "main.h"
/**
 * _strlen_recursion - displays length of string
 * @s: string to evaluated
 * Return: return 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * checker - checks each character of string
 * @s: target string
 * @c1: first number
 * @c2: second number
 * Return: 0
 */
int checker(char *s, int c1, int c2)
{
	if (*(s + c1) == *(s + c2))
	{
		if (c1 == c2 || c1 == c2 + 1)
		{
			return (1);
		}
		return (0 + checker(s, c1 + 1, c2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks for palindrome string
 * @s: target string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (checker(s, 0, _strlen_recursion(s) - 1));
}
