#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list any type of argument
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int ind = 0;
	char *str, *stor = "";

	va_list anylist;

	va_start(anylist, format);

	if (format)
	{
		while (format[ind])
		{
			switch (format[ind])
			{
				case 'c':
					printf("%s%c", stor, va_arg(anylist, int));
					break;
				case 'i':
					printf("%s%d", stor, va_arg(anylist, int));
					break;
				case 's':
					str = va_arg(anylist, char *);
					printf("%s%s", stor, str);
					break;
				default:
					ind++;
					continue;
			}
			stor = ", ";
			ind++;
		}
	}
	printf("\n");
	va_end(anylist);
}
