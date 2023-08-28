#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first target number
 * @n2: second target number
 * @r: buffer to store result
 * @size_r: is the buffer size
 * Return: returns a pointer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int abunt = 0;
	int m = 0;
	int n = 0;
	int figs = 0;
	int num1 = 0;
	int num2 = 0;
	int totalnum = 0;

	while (*(n1 + m) != '\0')
	{
		m++;
	}
	while (*(n2 + n) != '\0')
	{
		n++;
	}
	m--;
	n--;
	if (m >= size_r || n >= size_r)
	{
		return (0);
	}
	while (abunt == 1 || n >= 0 || m >= 0)
	{
		if (m < 0)
		{
			num1 = 0;
		}
		else
		{
			num1 = *(n1 + m) - '0';
		}
		if (n < 0)
		{
			num2 = 0;
		}
		else
		{
			num2 = *(n2 + n) - '0';
		}
		totalnum = num1 + num2 + abunt;
		if (totalnum >= 10)
		{
			abunt = 1;
		}
		else
		{
			abunt = 0;
		}
		if (figs >= (size_r - 1))
		{
			return (0);
		}
		*(r + figs) = (totalnum % 10) + '0';
		figs++;
		n--;
		m--;
	}
	if (figs == size_r)
	{
		return (0);
	}
	*(r + figs) = '\0';
	rev_string(r);
	return (r);
}
