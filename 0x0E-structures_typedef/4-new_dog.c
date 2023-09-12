#include <stdlib.h>
#include "dog.h"
/**
 * _stcp - copies a string
 * @des: where string will be copied to
 * @sr: target string to be copied from
 * Return: returns a pointer
 */
char *_stcp(char *des, char *sr)
{
	int ln, it;

	ln = 0;

	while (sr[ln] != '\0')
		ln++;

	for (it = 0; it < ln; it++)
		des[it] = sr[it];

	des[it] = '\0';
	return (des);
}
/**
 * _strlng - computes length of a string
 * @str: target string to be evaluated
 * Return: length of string
 */
int _strlng(char *str)
{
	int it;

	it = 0;

	while (str[it] != '\0')
		it++;

	return (it);
}
/**
 * new_dog - new instance of struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 * Return: returns a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;
	int ln1, ln2;

	ln1 = _strlng(name);
	ln2 = _strlng(owner);
	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);

	dg->name = malloc(sizeof(char) * (ln1 + 1));
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}
	dg->owner = malloc(sizeof(char) * (ln2 + 1));
	if (dg->owner == NULL)
	{
		free(dg);
		free(dg->name);
		return (NULL);
	}
	_stcp(dg->name, name);
	_stcp(dg->owner, owner);
	dg->age = age;

	return (dg);
}
