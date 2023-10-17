#include "main.h"
/**
 *_puts.c -  prints a string
 *
 * Return - Always 0
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
