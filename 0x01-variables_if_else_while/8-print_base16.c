#include <stdio.h>
/**
 * main - Entry point
 * Description alphabet
 * Return: Always 0 (Success)
**/
int main(void)
{
char n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
for (n = 'a'; n <= 'f'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
