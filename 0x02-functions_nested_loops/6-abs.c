#include "main.h"
#include <stdio.h>
/**
* _abs - return absolute value of a number
* @j: parameter
* Return: absolute value of a number
*/
int _abs(int j)
{
	if (j < 0)
	{
		j = -j;
	}
	return (j);
}
