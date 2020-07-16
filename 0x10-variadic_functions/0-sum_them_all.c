#include "variadic_functions.h"
/**
 * sum_them_all - sum all the arguments
 * @n: amount arguments
 * @...: arguments
 * Return: int
 **/
int sum_them_all(const unsigned int n, ...)
{
	if (n > 0)
	{
		va_list args;
		unsigned int i;
		int sumall = 0;

		va_start(args, n);
		for (i = 0; i < n; i++)
			sumall += va_arg(args, int);
		va_end(args);
		return (sumall);
	}
	return (0);
}
