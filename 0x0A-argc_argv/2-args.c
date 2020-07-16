#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - principal function
 * @argc: Count arguments
 * @argv: arguments strings
 * Return: Print all the arguments strings.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

