#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - execute function on each element of an array
 * @array: given array
 * @size: size of the array
 * @action: pointer to function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
