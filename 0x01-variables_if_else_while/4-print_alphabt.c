#include <stdio.h>
/**
 * main - prints alphabets in lowercase and a new line
 *
 * Return: 0
 *
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'z')
			putchar(letter);

	}
	putchar('\n');
	return (0);

}


