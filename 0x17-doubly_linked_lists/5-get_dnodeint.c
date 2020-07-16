#include "lists.h"
/**
 * get_dnodeint_at_index - get the specific node
 * @head: head node
 * @index: the index node to return
 * Return: node that match with the index
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int n = 0, i = 0;

	temp = head;
	if (temp == NULL)
		return (NULL);
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	temp = head;
	while (n < index && n <= i && temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	return (temp);
}
