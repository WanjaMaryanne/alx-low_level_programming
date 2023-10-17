#include "main.h"
/**
 *_puts -  prints a string, followed by a line
 *@str - string that prints
 *
 * Return - Always 0
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
