#include "lists.h"
#include <stdio.h>
/**
 * print_list - print list nodes
 * @h: node
 * Return: number of nodes
 **/
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *temp;

	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		if (temp->str != NULL)
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		n++;
	}
	return (n);
}
