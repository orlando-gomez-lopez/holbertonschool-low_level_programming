#include "holberton.h"
/**
 * binary_to_uint - convert binary to decimal
 * @b: binary
 * Return: decimal number
 **/
unsigned int binary_to_uint(const char *b)
{
	int i, j, len = 0, value;
	unsigned int resul = 1, total = 0;

	if (b != '\0')
	{
		for (i = 0; b[i] != '\0'; i++)
		{
			if (b[i] == (0 + 48) || b[i] == (1 + 48))
				len += 1;
			else
				return (0);
		}
		for (i = 0; i < len; i++)
		{
			resul = 1;
			if (b[i] == '1')
				value = 1;
			if (b[i] == '0')
				value = 0;
			if (len - 1 != i)
			{
				for (j = len - i - 1; j > 0; j--)
					resul *= 2;
				total += resul * value;
			}
			if (len - 1 == i)
				total += 1 * value;
		}
		return (total);
	}
	return (0);
}
