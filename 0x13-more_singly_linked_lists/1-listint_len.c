#include "lists.h"
#include <stdio.h>
/**
 * listint_len - print number of list nodes
 * @h: node
 * Return: number of nodes
 **/
size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	const listint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}
