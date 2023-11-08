#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - returns the index of the first element for which
 * the cmp function does not return 0
 *
 * @size: number of elements in the array array
 * @cmp: a pointer to the function to be used to compare value
 * @array: array
 * Return: -1 if no element matches and if  size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != '\0'))
				return (i);
		}
		if (size <= 0)
			return (-1);
	}
	return (-1);
}
