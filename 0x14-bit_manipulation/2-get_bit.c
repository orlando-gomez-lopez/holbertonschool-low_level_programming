#include "holberton.h"
/**
 * get_bit - get the specifi bit index
 * @n: decimal number
 * @index: index to find
 * Return: nothing
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, j, k, exp = 1, flag = 0;

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
			flag = 0;
			if (j == index)
				flag = 1;
			for (k = j; k > 0; k--)
				exp *= 2;
			if (exp <= n)
			{
				n = n - exp;
				if (flag == 1)
					return (1);
			}
			else if (exp > n)
				if (flag == 1)
					return (0);
		}
	}
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (-1);
}
