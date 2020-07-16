#include "holberton.h"
/**
 * print_square - prints
 * @size: The size of the square
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void print_square(int size)
{
	int n;
	int d;

	if (size > 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (d = 1; d <= size; d++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
