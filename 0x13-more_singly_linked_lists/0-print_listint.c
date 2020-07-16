#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print list nodes
 * @h: node
 * Return: number of nodes
 **/
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		n++;
	}
	return (n);
}
