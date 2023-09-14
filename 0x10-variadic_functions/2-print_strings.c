#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - outputs strings on screen
 * @separator: value to separate strings
 * @n: is the number of strings
 * @...: determines varied number of arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;
	char *st;
	unsigned int ind;

	va_start(words, n);

	for (ind = 0; ind < n; ind++)
	{
		st = va_arg(words, char *);

		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(words);
}
