#include "holberton.h"
/**
 * print_triangle - prints
 * @size: The size of the square
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void print_triangle(int size)
{
	int n;
	int d;
	int c;

	if (size > 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (d = 1; d <= size - n; d++)
			{
				_putchar(' ');
			}
			for (c = 1; c <= n; c++)
			{
				_putchar('#');
			}
			if (n != size)
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
