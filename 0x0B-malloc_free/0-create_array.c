#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create array with malloc
 * @size: Amount of elements
 * @c: Character to print
 * Return:  pointer1
 * On error, NULL is returned
 **/
char *create_array(unsigned int size, char c)
{
	char *pointer1;
	unsigned int i;

	if (size == 0)
	{
		pointer1 = NULL;
		return (pointer1);
	}
	else
	{
		pointer1 = (char *)malloc(size * sizeof(*pointer1));
		if (pointer1 != NULL)
		{
			for (i = 0; i < size; i++)
				*(pointer1 + i) = c;
	}
		else
		{
			pointer1 = NULL;
			return (pointer1);
		}
	}
	return (pointer1);
}
