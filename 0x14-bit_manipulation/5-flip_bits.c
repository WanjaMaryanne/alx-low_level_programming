#include "main.h"

int bit(unsigned long int n, unsigned int index);
/**
 * flip_bits -  the number of bits you would need to flip
 * to get from one number to another.
 * @n: the integer number to flip.
 * @m: the second number to be formed after flipping.
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, counter = 0;

	for (i = 0; i < 64; i++)
	{
		if (bit(n, i) != bit(m, i))
			counter++;
	}
	return (counter);
}
/**
 * bit - return the value of a bit at index
 * @n: integer number
 * @index: position of the bit
 *
 * Return: the value of thr bit
 */
int bit(unsigned long int n, unsigned int index)
{
	unsigned int counter;

	for (counter = 0; counter < index; counter++)
		n >>= 1;

	return (n & 1);
}
