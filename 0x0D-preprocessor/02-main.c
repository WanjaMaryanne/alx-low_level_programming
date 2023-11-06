#include <stdio.h>
/**
 * main - program that prints the name of the file it was 
 * complied from follwed by a new line
 *@FILE: file use for compilation
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
