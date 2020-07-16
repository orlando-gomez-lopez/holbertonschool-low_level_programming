#include "holberton.h"
#include <stdio.h>
/**
 * _strlen_recursion - prints
 * @s: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int _strlen_recursion(char *s)
{
	int length = 0;
	int increment = 0;

	if (*s != '\0')
	{
		increment++;
		length += increment + _strlen_recursion(s + 1);
		return (length);
	}
	else
	{
		return (0);
	}
}
