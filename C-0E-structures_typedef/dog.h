#ifndef STRUCTUREDOG_H
#define STRUCTUREDOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 *struct dog - a new type of data
 *representing a dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* STRUCTUREDOG_H */
