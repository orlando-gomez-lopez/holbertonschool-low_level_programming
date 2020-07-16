#include "holberton.h"
/**
 * more_numbers - prints
 * @void
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void more_numbers(void)
{
	char c;
	char d;

	for (c = 0; c <= 9; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d > 9)
			{
				_putchar(d / 10 + 48);
			}
			_putchar(d % 10 + 48);
		}
		_putchar('\n');
	}
}
