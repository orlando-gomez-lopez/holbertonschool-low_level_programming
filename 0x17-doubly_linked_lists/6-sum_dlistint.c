#include "lists.h"
/**
 * sum_dlistint - sum numbers of the nodes
 * @head: head node
 * Return: sum of the numbers of nodes
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
