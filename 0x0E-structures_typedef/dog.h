#ifndef DOG_H
#define DOG_H

/**
 * struct dog - describes elements for dog
 * @name: holds name of dog
 * @age: shows age of dog
 * @owner: shows owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
