#include "function_pointers.h"
/**
 * int_index - index of the first element that cmp doesnt return 0
 * @array: array integers
 * @size: amount of elements of the array
 * @cmp: pointer to the function that compare values
 * Return: integer
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, flag = 0;

	if (size <= 0)
		return (-1);
	if (array != '\0' && cmp != '\0')
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
			{
				flag = 1;
				return (i);
			}

		}
		if (flag == 0)
			return (-1);
	}
	return (-1);
}
