#include "holberton.h"
/**
 * print_line - prints
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void print_line(int n)
{
	char c;

	for (c = 1; c <= n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
