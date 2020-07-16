#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print all the numbers
 * @n: amount arguments
 * @...: arguments
 * @separator: symbol that separates the numbers
 * Return: nothing
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < (n - 1))
			if (separator != '\0')
				printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
