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
/**
 * dog_t - a new name for type struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
