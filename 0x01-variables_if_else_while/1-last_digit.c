#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to the variable n
 * Return: 0
 *
 */
int main(void)
{
	int n;
	int last_number;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);

	last_number = n % 10;

	if (last_number	> 5)
	{
		printf("%d and is greater than 5\n", last_number);
	}
	else if (last_number < 6 && last_number != 0)
	{
		printf("%d and is less than 6 and not 0\n", last_number);
	}
	{
		printf("%d and is 0\n", last_number);
	}
	return (0);
}


