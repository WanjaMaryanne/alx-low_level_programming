#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: 0
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	return (-1);
}
