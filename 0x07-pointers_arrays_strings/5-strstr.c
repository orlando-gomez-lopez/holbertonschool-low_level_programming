#include "holberton.h"
#include <stdlib.h>
/**
 * _strchr - prints
 * @haystack: The character to print
 * @needle: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
char *_strstr(char *haystack, char *needle)
{
	char *pointer1, *pointer2;
	int i = 0, j = 0, k = 0, count_needle = 0;
	
	pointer1 = haystack;
	pointer2 = needle;
	if (pointer2 == NULL)
		return (NULL);
	while (pointer2)
		k++;
	if (k == 0) 
		return (pointer1);
	for (i = 0; *(pointer1 + i) != '\0'; i++)
	{
		if (*(pointer1 + i) == *(pointer2 + j))
			for (j = 1, k = 1; *(pointer + j) != '\0'; j++; k++)
			{
				if (*(pointer1 + (k + i)) == *(pointer2 + j + k && *(pointer1 + ( )
				{
					count_needle++;
				}
				else
				{
					j = 0;

				}
			}
		}
		else
			j = 0;
	}
}

