#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory of dogs
 * @d: instance of stuct dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
