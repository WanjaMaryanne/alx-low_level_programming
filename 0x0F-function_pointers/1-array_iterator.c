#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator -  executes a function given as a parameter 
 * on each element of an array.
 * @action:  a pointer to the function used
 * @array: the array whose elements are to be iterated
 * @size: size of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
