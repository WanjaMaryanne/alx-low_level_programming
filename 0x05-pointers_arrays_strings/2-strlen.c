#include "main.h"
/**
 *_strlen -  returns the length of a string 
 *
 *@s - pointer deference, string to show length
 * Return: Always 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
