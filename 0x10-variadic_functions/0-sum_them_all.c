#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - adds all arguments
 * @n: determines number of argemunts
 * @ ...: arguments can be more than one
 * Return: returns integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mylist;
	unsigned int i, add = 0;

	if (n == 0)
		return (0);

	va_start(mylist, n);

	for (i = 0; i < n; i++)
	{
		add += va_arg(mylist, int);
	}

	va_end(mylist);

	return (add);
}
