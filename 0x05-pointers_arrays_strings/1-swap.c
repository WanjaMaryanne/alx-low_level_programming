#include "main.h"
/**
 * swap.c - swaps the values of two integers.
 *
 *@a: integer
 *@b: integer
 *
 * Return: Always 0.
 *
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
