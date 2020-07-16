#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at the specific node
 * @h: head node
 * @idx: the index node to insert
 * @n: value n
 * Return: inserted node
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *next, *new;
	unsigned int j = 0, i = 0;

	temp = *h;
	if (temp == NULL) 
		return (NULL);
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (idx > i - 1)
		return (NULL);
	temp = *h;
	while (j < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		j++;
	}
	next = temp->next;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = temp;
	new->next = next;
	next->prev = new;
	temp->next = new;	
	return (temp);
}
