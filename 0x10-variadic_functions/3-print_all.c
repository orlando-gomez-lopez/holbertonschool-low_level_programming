#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
/**
 * print_all - print all
 * @format: format
 * @...: arguments
 * Return: nothing
 **/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, flag = 0;
	char *argument;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		flag = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				argument = va_arg(args, char *);
				if (argument == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", argument);
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
