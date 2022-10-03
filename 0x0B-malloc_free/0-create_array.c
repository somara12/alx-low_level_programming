#include "main.h"

/**
* create_array - creates an array of chars, and
* initializes it with a specific char.
*@size: Size of array
*@c: Character to be inserted
*Return: NULL if size is zero or if it fails,
*and pointer to the array when successful.
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int b;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		array[b] = c;

	return (array);
}
