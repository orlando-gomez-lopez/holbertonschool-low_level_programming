#include "holberton.h"


/**
 * _memset - prints
 * @s: The character to print
 * @b: The character to print
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
