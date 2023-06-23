#include <stdio.h>

void print_char(char c);

void print_char(char c)
{
	printf("%c\n", c);
}

int main(void)
{
	printf("%s\n", "Hello");
	print_char('m');
	return (0);
}
