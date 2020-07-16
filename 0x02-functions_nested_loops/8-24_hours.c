#include "holberton.h"
/**
 * jack_bauer - prints
 * @n,c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void jack_bauer(void)
{
int n;
int c;

for (n = 0; n <= 23; n++)
{
for (c = 0; c <= 59; c++)
{
_putchar(n / 10 + 48);
_putchar(n % 10 + 48);
_putchar(':');
_putchar(c / 10 + 48);
_putchar(c % 10 + 48);
_putchar('\n');
}
}
}
