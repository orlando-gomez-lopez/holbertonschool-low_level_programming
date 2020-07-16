#include <stdio.h>
#include <math.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long n;
	long div;

	n = 612852475143;
	for (div = 2; div <= n;)
	{
		if (fmod(n, div) == 0)
		{
			n = n / div;
		}
		else
		{
			++div;
		}

	}
	printf("%lu\n", div);
	return (0);
}
