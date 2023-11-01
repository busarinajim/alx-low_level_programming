#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @c: character in array
 * @size: size of array
 * Return: pointer to array or NULL
 *
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
