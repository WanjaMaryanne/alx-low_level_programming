#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy string to a newly allocated space in memory
 * @str: string to be used
 *
 * Return: NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int x, y;

	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; str[x]; x++)
	{
		y++;
	}
	ptr = (char *)malloc((y + 1) * (sizeof(char)));

	if (ptr == NULL)

	{
		return (NULL);
	}
	for (x = 0; str[x]; x++)
	{
		ptr[x] = str[x];
	}
	ptr[y] = '\0';

	return (ptr);
	free(ptr);
}
