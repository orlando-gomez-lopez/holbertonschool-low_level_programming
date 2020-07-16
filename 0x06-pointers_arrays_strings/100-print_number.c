#include "holberton.h"
#include <stdio.h>
#include <math.h>
/**
 * print_number - prints
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void print_number(int n)
{
	int number, count_div, count_pow, resul;

	number = n;
	while (n != 0)
	{
		n /= 10;
		++count_div;
	}
	for (count_pow = count_div; count_pow > 0; count_pow--)
	{
		if (number < 0)
		{
			if (count_pow == count_div)
			{
				resul = (((-1) * (number + (pow(10, count_pow - 1)))) % 10);
				_putchar('-');
				_putchar(resul + 48);
			}
			else
			{
				resul = ((((-1) * (number + (pow(10, count_pow - 1))))) % 10);
				_putchar(resul + 48);
			}
		}
		else
		{
			resul = ((number - (pow(10, count_pow - 1))) % 10);
			_putchar(resul + 48);
		}
	}
}
