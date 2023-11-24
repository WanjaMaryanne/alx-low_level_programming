#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: is the index, starting from 0 of the bit you
 * want to set
 * @n: pointer to the int
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num_one, orig_num, counter, i;

	i = counter = num_one = 0;

	orig_num = *n;

	if (index > 64)
		return (-1);

	while (counter < 64)
	{
		i = i << 1;
		if (counter == index)
			i += 1;
		else
			i += orig_num & 1;
		counter++;
		orig_num = orig_num >> 1;
	}

	while (counter > 0)
	{
		num_one = num_one << 1;

		num_one += i & 1;
		i = i >> 1;
		counter--;
	}

	*n = num_one;
	return (1);
}

