#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - to print print elements of struct dog
 * @d: instance of struct dog to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
