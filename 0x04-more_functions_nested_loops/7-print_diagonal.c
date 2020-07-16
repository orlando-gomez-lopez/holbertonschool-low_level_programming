#include "holberton.h"
/**
 * print_diagonal - prints
 * @n: The amount of underlines to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void print_diagonal(int n)
{
	char c;
	char d;

	if (n > 0)
	{
		for (c = 1; c <= n; c++)
		{
			if (c > 1)
				for (d = 2; d <= c; d++)
					_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
