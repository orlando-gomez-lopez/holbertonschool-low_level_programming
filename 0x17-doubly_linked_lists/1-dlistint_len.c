#include "lists.h"
/**
 * dlistint_len - length of nodes
 * @h: head node
 * Return: number of nodes
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}
