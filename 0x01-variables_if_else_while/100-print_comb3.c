#include <stdio.h>
/**
 * main - Function to print two numbers first less than second
 * Description Function to print two numbers
 * Return: Always 0 (Success)
**/
int main(void)
{
int n;
int x;

for (n = 0; n < 10 ; n++)
{
	for  (x = 0; x < 10; x++)
	{
		if (n < x)
		{
			putchar(n % 10 + '0');
			putchar(x % 10 + '0');
			if (x + n != 0 && n < 8)
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
