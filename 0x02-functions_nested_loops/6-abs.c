#include "holberton.h"
/**
 * _abs - prints
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
if (n < 0)
{
n = n * (-1);
return (n);
}
return (0);
}
