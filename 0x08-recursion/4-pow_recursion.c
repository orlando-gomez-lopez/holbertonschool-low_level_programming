#include "holberton.h"
#include <stdio.h>
/**
 * _pow_recursion - prints
 * @x: The character to print
 * @y: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int _pow_recursion(int x, int y)
{
	int resul;

	if (y > 1)
	{
		resul = x *  _pow_recursion(x, y - 1);
		return (resul);
	}
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	else
		return (-1);
}
