#include "holberton.h"
#include <ctype.h>

/**
 * leet - prints
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
char *leet(char *c)
{
	int i;
	char change;

	i = 0;
	while (*(c + i) != '\0')
	{
		if (*(c + i) == 'a' || *(c + i) == 'A')
			change = '4';					
		if (*(c + i) == 'e' || *(c + i) == 'E')
			change = '3';		
		if (*(c + i) == 'o' || *(c + i) == 'O')
			change = '0';		
		if (*(c + i) == 't' || *(c + i) == 'T')
			change = '7';		
		if (*(c + i) == 'a' || *(c + i) == 'A')
		i++;
	}
	return (c);
}
