#include <stdio.h>
/**
 * main - Entry point
 * Description alphabet
 * Return: Always 0 (Success)
**/
int main(void)
{
int n;

for (n = 0; n < 10 ; n++)
{
if (n != 0)
{
putchar(',');
putchar(' ');
}
putchar(n % 10 + '0');
}
putchar('\n');
return (0);
}
