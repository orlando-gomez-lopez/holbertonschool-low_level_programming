#include "holberton.h"

/**
 * set_string - prints
 * @s: The character to print
 * @to: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void set_string(char **s, char *to)
{
	*s = to;
}
