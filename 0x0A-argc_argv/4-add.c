#include "holberton.h"
/**
 * main - principal function
 * @argc: Count arguments
 * @argv: arguments strings
 * Return: Print all the arguments strings.
 **/
int main(int argc, char *argv[])
{
	int i, j, resul = 0, advice = 0;

	if (argc == 1)
		printf("%d\n", resul);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
					advice = 1;
				if (advice == 1)
					break;
			}
			if (advice == 0)
				resul += atoi(argv[i]);
			else
				break;
		}
		if (advice == 0)
			printf("%d\n", resul);
		if (advice == 1)
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
