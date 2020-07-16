#include "holberton.h"
/**
 * print_numbers - prints
 * @void
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void print_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + 48);
	}
	_putchar('\n');
}
