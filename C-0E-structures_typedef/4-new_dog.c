#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * _strlen - function that prints the lenght of a string
 * @s: Parameter using as pointer to save the string to run the function
 * Return: Nothing
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}
/**
 * _strcpy - function that copies an array to another one
 * @dest: pointer to have the original string
 * @src: pointer to string to copy
 * Return: Char copy of the string
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';

	return (dest);
}
/**
 * new_dog - creates a new struct of type dog
 * @name: string for dog name passed to new struct
 * @age: float for dog age passed to new struct
 * @owner: string for owner passed to new struct
 * Return: pointer to new dog struct, or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nname;
	int nowner;
	dog_t *new;

	nname = _strlen(name + 1);
	nowner = _strlen(owner + 1);
	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);
	if (name == NULL)
		return (NULL);
	new->name = malloc(nname * sizeof(char));
	if (owner == NULL)
		return (NULL);
	new->owner = malloc(nowner * sizeof(char));

	new->name = _strcpy(new->name, name);
	new->owner = _strcpy(new->owner, owner);
	new->age = age;

	return (new);
}
