#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: The string destination
 * @s2: The string source to be concatenated
 *
 * Return: NULL on failure, otherwise return a pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	ptr = malloc(sizeof(char) * len);

	if (ptr == 0)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ptr[concat_index++] = s1[i];

	for (i = 0; s2[i]; i++)
		ptr[concat_index++] = s2[i];

	return (ptr);
}
