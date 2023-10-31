#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size -  size of the triangle
 * @x - one of the sides
 * @y - one of the sides
 * @z - one of the sides
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = size - x; y > 1; y--)
			{
				_putchar(' ');
			}

			for (z = 0; z <= x; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

