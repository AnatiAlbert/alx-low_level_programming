#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - outputs a name unto the console
 * @name: target string to be outputted
 * @f: pointer function to reference other functions
 * Return: returns name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
