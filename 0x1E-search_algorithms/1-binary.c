#include "search_algos.h"

/**
 * binary_search - binary search
 * @array: numbers.
 * @size: size of array
 * @value: value to search
 * Return: the id in the array when find value, if not -1.
 */

int binary_search(int *array, size_t size, int value)
{

	if (size > 0)
	{
		size_t mid = size / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			return (binary_search(&array[mid], mid, value));

		return (binary_search(&array[0], mid, value));
	}
	return (-1);
}
