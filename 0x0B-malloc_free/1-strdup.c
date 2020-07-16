#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - duplicate an array
 * @str: String
 * Return:  pointer1
 * On error, NULL is returned
 **/
char *_strdup(char *str)
{
	char *pointer1;
	unsigned int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (*(str + j) != '\0')
			j++;
		pointer1 = (char *)malloc((j + 1) * sizeof(*pointer1));
		if (pointer1 != NULL)
		{
			for (i = 0; i < j; i++)
				*(pointer1 + i) = *(str + i);
			*(pointer1 + (i + 1)) = '\0';
			return (pointer1);
		}
		else
		{
			return (NULL);
		}
	}
}
