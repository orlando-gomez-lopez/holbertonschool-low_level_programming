#include "holberton.h"
/**
 * print_most_numbers - prints
 * @void
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void print_most_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
		_putchar(c + 48);
	}
	_putchar('\n');
}
