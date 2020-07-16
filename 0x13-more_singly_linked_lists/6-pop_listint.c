#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - delete head node
 * @head: first node
 * Return: number of each node
 **/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = temp;
	return (value);
}
