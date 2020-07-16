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
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 2)
	{
		printf("%d\n", atoi(argv[argc - argc + 1]) * atoi(argv[argc - argc + 2]));
		return (0);
	}
	return (0);
}

