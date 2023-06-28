#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter >= 'z'; letter--))
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
