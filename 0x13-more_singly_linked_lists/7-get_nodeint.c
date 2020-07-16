#include "lists.h"
/**
 * get_nodeint_at_index - get the specific node
 * @head: head node
 * @index: the index node to return
 * Return: node that match with the index
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
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
