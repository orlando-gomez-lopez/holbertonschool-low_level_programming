#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - print number decimal to binary
 * @n: decimal number
 * Return: nothing
 **/
void print_binary(unsigned long int n)
{
	unsigned long int i, j, k, exp = 1;

	if (n > 1)
	{
		for (i = 0; exp < n; i++)
			exp *= 2;
		if (exp > n)
			j = i - 1;
		if (exp == n)
			j = i;
		for ( ; j > 0; j--)
		{
			exp = 1;
			for (k = j; k > 0; k--)
				exp *= 2;
			if (exp <= n)
			{
				n = n - exp;
				_putchar('1');
			}
			else if (exp > n)
				_putchar('0');
		}
	}
	if (n == 0)
		_putchar('0');
	if (n == 1)
		_putchar('1');
}
