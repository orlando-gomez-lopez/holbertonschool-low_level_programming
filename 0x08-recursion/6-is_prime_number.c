<<<<<<< HEAD
#include "holberton.h"
=======
int _getpn(int, int, int);
>>>>>>> 6c9be4db4b28acb80b6f0670c9f76bd6c710d525
/**
 * is_prime_number - prints
 * @n: The character to print
 * Return: On success 1.
<<<<<<< HEAD
 * On error, -1 is returned, and errno is set appropriately.
 **/
int is_prime_number(int n)
{
	int resul = 0;

	if (n < 2)
	{
		return (0);
	}
	else
	{
		resul = _getpn(n, 2, 0);
		if (resul == 1)
=======
 **/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n >= 2)
	{
		if ((_getpn(n, 2, 0)) == 1)
>>>>>>> 6c9be4db4b28acb80b6f0670c9f76bd6c710d525
			return (1);
		else
			return (0);
	}
<<<<<<< HEAD
}
=======
	return (0);
}
/**
 *_getpn - do operations
 *@n: number
 *@a: divider
 *@resul : counter
 *Return: 1 if n % i is different from 0, otherwise 0
 **/
>>>>>>> 6c9be4db4b28acb80b6f0670c9f76bd6c710d525
int _getpn(int n, int a, int resul)
{
	if ((n % a) == 0)
	{
		resul++;
<<<<<<< HEAD
		if ( a != n)
			return _getpn((n / a), a, resul);
		return (resul);
	}
	else if (n != a && ((n / a) != 0))
	{
		return (_getpn(n, a + 1, resul));
	}
=======
		if (a != n)
			return (_getpn((n / a), a, resul));
		return (resul);
	}
	else if ((n != a) && ((n / a) != 0))
		return (_getpn(n, a + 1, resul));
>>>>>>> 6c9be4db4b28acb80b6f0670c9f76bd6c710d525
	return (0);
}
