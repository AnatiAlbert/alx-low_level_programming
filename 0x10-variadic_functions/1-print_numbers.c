#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers with separator in it
 * @separator: value to seperate numbers
 * @n: number of integers to be passed
 * @...: shows that there is more arguments
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list mylist;
	unsigned int ind = 0;

	va_start(mylist, n);

	while (ind < n)
	{
		printf("%d", va_arg(mylist, int));

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
		ind++;
	}
	printf("\n");

	va_end(mylist);
}
