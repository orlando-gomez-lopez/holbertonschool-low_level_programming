#include<stdio.h>
#include "holberton.h"

/**
 * swap_int - prints
 * @a: The character to print
 * @b: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void swap_int(int *a, int *b)
{
	int y = *a;
	int z = *b;

	*a = z;
	*b = y;
}
