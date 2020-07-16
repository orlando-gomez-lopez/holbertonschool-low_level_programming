#include <stdio.h>
/**
 * main - Entry point
 * Description alphabet
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
if (x + n != 0)
{
putchar(',');
putchar(' ');
}
putchar(n % 10 + '0');
putchar(x % 10 + '0');
}
}
putchar('\n');
return (0);
}
