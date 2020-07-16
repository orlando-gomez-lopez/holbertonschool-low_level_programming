#include "holberton.h"
#include <stdlib.h>

/**
 * _strchr - prints
 * @s: The character to print
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
char *_strchr(char *s, char c)
{
	char *pointer;

	pointer = s;
	while (*pointer != '\0')
	{
		if (pointer == NULL)
			return (NULL);
		else if (*pointer == c)
			return (pointer);
		pointer++;
	}
	if (*pointer == c)
		return (pointer);
	else
		return (NULL);
}
