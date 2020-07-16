#include <stdio.h>
/**
 * main - Function to print two numbers two digits first less than second
 * Description Function to print two numbers
 * Return: Always 0 (Success)
**/
int main(void)
{
int n;
int x;

for (n = 0; n < 100; n++)
{
	for  (x = 0; x < 100; x++)
	{
		if (n < x)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			putchar(' ');
			putchar(x / 10 + '0');
			putchar(x % 10 + '0');
			if (x + n != 0 && n < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
