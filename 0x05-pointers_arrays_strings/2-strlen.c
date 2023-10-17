#include "main.h"
/**
 * int _strlen -  returns the length of a string.
 *s - pointer deference
 *
 * Return: Always 0
 *
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
