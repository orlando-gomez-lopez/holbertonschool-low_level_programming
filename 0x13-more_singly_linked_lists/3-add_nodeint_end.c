#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add node to the final position
 * @head: first node
 * @n: integer number
 * Return: number of each node
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	temp = *head;
	if (temp == NULL)
		*head = new;
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
