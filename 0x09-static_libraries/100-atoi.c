#include "main.h"
/**
 * _atoi - to convert a string to an integer
 * @s: the string to use in program
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int sig = 1, x = 0;
	unsigned int unsig = 0;

	while (!(s[x] <= '9' && s[x] >= '0') && s[x] != '\0')
	{
		if (s[x] == '-')
			sig *= -1;
		x++;
	}
	while (s[x] <= '9' && (s[x] >= '0' && s[x] != '\0'))
	{
		unsig = (unsig * 10) + (s[x] - '0');
		x++;
	}
	unsig *= sig;
	return (unsig);
}
