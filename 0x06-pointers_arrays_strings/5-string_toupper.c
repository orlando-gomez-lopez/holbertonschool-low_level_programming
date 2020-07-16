#include "holberton.h"

/**
 * string_toupper - prints
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (*(c + i) != '\0')
	{
		if ((*(c + i)) >= 97 && (*(c + i)) <= 122)
			*(c + i) = *(c + i) - 32;
		i++;
	}
	return (c);
}
