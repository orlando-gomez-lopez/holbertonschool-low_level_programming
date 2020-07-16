#include "lists.h"
/**
 * print_dlistint - print nodes
 * @h: head node
 * Return: number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		if (temp->n == '\0')
			printf("%d\n", temp->n);
		if (temp->n != '\0')
			printf("%d\n", temp->n);
		temp = temp->next;
		n++;
	}
	return (n);
}
