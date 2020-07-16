#include "holberton.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncpy - prints
 * @dest: The character to print
 * @src: The character to print
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int count_src, length_src;

	for (length_src = 0; *(src + length_src) != '\0'; )
	{
		length_src++;
	}
	for (count_src = 0; count_src < n; count_src++)
	{
		if (count_src >= length_src)
			*(dest + count_src) = '\0';
		else
			*(dest + count_src) = *(src + count_src);
	}
	return (dest);
}
