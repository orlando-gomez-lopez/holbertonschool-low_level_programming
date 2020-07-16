#include "holberton.h"
/**
 * leet - prints
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
char *leet(char *c)
{
	char cadena[] = { 'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L' };
	char decode[] = { '4', '4', '3', '3', '0', '0', '7', '7', '1', '1' };
	int i = 0, j;

	while (*(c + i) != '\0')
	{
		for (j = 0; j < (int)(sizeof(cadena) / sizeof(char)); j++)
		{
			if (*(c + i) == cadena[j])
				*(c + i) = decode[j];
		}
		i++;
	}
	return (c);
}
