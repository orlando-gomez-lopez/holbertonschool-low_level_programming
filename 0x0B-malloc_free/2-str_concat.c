#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two arrays
 * @s1: String 1
 * @s2: String 2
 * Return:  pointer1
 **/
char *str_concat(char *s1, char *s2)
{
	char *pointer1, *pointer2, *finalpointer;
	unsigned int i = 0, j = 0, k, w, final;

	if (s1 == NULL)
		pointer1 = "";
	else
		pointer1 = s1;
	if (s2 == NULL)
		pointer2 = "";
	else
		pointer2 = s2;
	for ( ; *(pointer1 + j) != '\0'; )
		j++;
	for ( ; *(pointer2 + i) != '\0'; )
		i++;
	final = i + j + 1;
	finalpointer = (char *)malloc((final) * sizeof(*finalpointer));
	if (finalpointer != NULL)
	{
		for (k = 0; k < j; k++)
			*(finalpointer + k) = *(pointer1 + k);
		for (w = 0; w < i; w++)
			*(finalpointer + (k + w)) = *(pointer2 + w);
		*(finalpointer + (final)) = '\0';
		return (finalpointer);
	}
	if (finalpointer == NULL)
		return (NULL);
	return (NULL);
}
