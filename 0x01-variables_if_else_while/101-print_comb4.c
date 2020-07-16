#include <stdio.h>
/**
 * main - Function to print three numbers first < second < three
 * Description Function to print two numbers
 * Return: Always 0 (Success)
**/
int main(void)
{
	int n, x, z;

	for (n = 0; n < 10 ; n++)
	{
		for (x = 0; x < 10; x++)
		{
			for (z = 0; z < 10; z++)
			{
				if (n < x && x < z)
				{
					putchar(n % 10 + '0');
					putchar(x % 10 + '0');
					putchar(z % 10 + '0');
					if (x + n + z != 0 && n < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
