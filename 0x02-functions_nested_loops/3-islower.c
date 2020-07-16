#include "holberton.h"
/**
 * _islower - prints
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int _islower(int c)
{
int i;
i = c;

if (i >= 97 && i <= 122)
{
return (1);
}
else
{
return (0);
}
}
