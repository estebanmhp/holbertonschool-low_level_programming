#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct type dog
 * @d: pointer to struct type dog
 * Return: the value of the member, or nil if any of d element is NULL
 * dont print anything if d is null
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
			return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age > 0.0f)
		printf("Age: %.1f\n", d->age);
	else
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
