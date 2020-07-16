#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - addition
 * @n: The character to print
 * Return: nothing
 * On error, -1 is returned, and errno is set appropriately.
 **/
void print_to_98(int n)
{

if (n <= 98)
{
for ( ; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
}
else
{
printf("%d, ", n);
}
}
}
else
{
for ( ; n >= 98; n--)
{
if (n == 98)
{
printf("%d", n);
}
else
{
printf("%d, ", n);
}
}
}
printf("\n");
}
