#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"
/**
 * is_digit - checks if a string contains a non-digit char
 * @st: target string
 * Return: 0 or 1
 */
int is_digit(char *st)
{
	int e = 0;

	while (st[e])
	{
		if (st[e] < '0' || st[e] > '9')
			return (0);
		e++;
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @st: target string
 * Return: length of string
 */
int _strlen(char *st)
{
	int e = 0;

	while (st[e] != '\0')
		e++;

	return (e);
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of argument
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *st1, *st2;
	int lt1, lt2, lt, i, carry, dgt1, dgt2, *rslt, a = 0;

	st1 = argv[1], st2 = argv[2];
	if (argc != 3 || !is_digit(st1) || !is_digit(st2))
		errors();
	lt1 = _strlen(st1);
	lt2 = _strlen(st2);
	lt = lt1 + lt2 + 1;
	rslt = malloc(sizeof(int) * lt);
	if (!rslt)
		return (1);
	for (i = 0; i <= lt1 + lt2; i++)
		rslt[i] = 0;
	for (lt1 = lt1 - 1; lt1 >= 0; lt1--)
	{
		dgt1 = st1[lt1] - '0';
		carry = 0;
		for (lt2 = _strlen(st2) - 1; lt2 >= 0; lt2--)
		{
			dgt2 = st2[lt2] - '0';
			carry += rslt[lt1 + lt2 + 1] + (dgt1 * dgt2);
			rslt[lt1 + lt2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			rslt[lt1 + lt2 + 1] += carry;
	}
	for (i = 0; i < lt - 1; i++)
	{
		if (rslt[i])
			a = 1;
		if (a)
			_putchar(rslt[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(rslt);
	return (0);
}
