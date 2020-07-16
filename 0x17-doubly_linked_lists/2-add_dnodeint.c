#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - add node to the first position
 * @head: first node
 * @n: integer number
 * Return: node
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	if (temp == NULL)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	new->next = temp;
	temp->prev = new;
	*head = new;
	return (new);
}
