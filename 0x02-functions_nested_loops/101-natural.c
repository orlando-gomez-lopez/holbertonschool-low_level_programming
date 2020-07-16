#include <stdio.h>
/**
 * main - function to print sum of numbers to 1024 divisibles by 3 and 5
 * Description: Function that sums div 3 and 5 until 1024
 * Return: 0
 */
int main(void)
{
	int x, sum;

	for (x = 3; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum += x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
