#include "lists.h"
/**
 * list_len - print list nodes
 * @h: node
 * Return: number of nodes
 **/
size_t list_len(const list_t *h)
{
	unsigned int n = 0;
	const list_t *temp;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}
