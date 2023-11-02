#include "main.h"
/**
 * _isupper - checks if upppercase letters
 * @c: char to check
 *
 * Return: if uppercase return 1, else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
