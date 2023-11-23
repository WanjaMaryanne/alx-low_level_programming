#include "main.h"

int powerof(unsigned int num, unsigned int base);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number or 0 if there is one or more
 * chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int index, decimal;
	unsigned int i, j, k;

	index = decimal = j = k = 0;

	if (b == NULL)
		return (0);

	while (b[index])
		index++;
	k = index - 1;

	while  (i < index)
	{
		if (b[k] == '1' || b[k] == '0')
		{
			decimal = decimal + ((b[k] - '0') * powerof(2, j));
			j++;
			k--;
		}
		else
			return (0);
		i++;
	}
	return (decimal);
}

/**
 * powerof - calculates the power of one unsigned int raised to
 * the power of another unsigned int
 * @num: number to raised to power
 * @base: the power to which a number is raised
 *
 * Return: the power, int
 */
int powerof(unsigned int num, unsigned int base)
{
	unsigned int i, result = 1;

	if (num == 0)
		return (0);
	if (base == 0 || num == 1)
		return (1);
	if (base == 1)
		return (num);

	else
	{
		for (i = 1; i <= base; i++)
		{
			result = result * num;
		}
	}
	return (result);
}
