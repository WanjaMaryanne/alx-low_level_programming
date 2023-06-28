#include <stdio.h>
/**
 * main - prints all the numbers of base 16
 * Return: 0
 */

int main(void)

{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	for (number = 97; number <= 103; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
