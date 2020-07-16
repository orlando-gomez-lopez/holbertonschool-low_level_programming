#include "holberton.h"
#include <stdio.h>
/**
 * factorial - prints
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int factorial(int n)
{
	int resul;

	if (n > 0)
	{
		resul = n * factorial(n - 1);
		return (resul);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
