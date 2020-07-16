#include "lists.h"
/**
 * sum_listint - sum numbers of the nodes
 * @head: head node
 * Return: sum of the numbers of nodes
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
