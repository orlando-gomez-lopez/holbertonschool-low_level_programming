#include "function_pointers.h"
/**
 * array_iterator - print elements of an array
 * @array: array integers
 * @size: amount of elements of the array
 * @action: pointer to the function
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != '\0' && action != '\0')
		for (i = 0; i < size; i++)
			action(array[i]);

}
