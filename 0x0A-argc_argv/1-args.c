#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - principal function
 * @argc: Count arguments
 * @argv: arguments strings
 * Return: program name.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1 - atoi(argv[argc - 1])));
	return (0);
}

