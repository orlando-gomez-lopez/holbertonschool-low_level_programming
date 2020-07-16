#include "holberton.h"
/**
 * set_bit - set the specifi bit index
 * @n: decimal number
 * @index: index to find
 * Return: 1 if it works or -1 if not
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	n = (1 << index) | n;
	return (n);
}
