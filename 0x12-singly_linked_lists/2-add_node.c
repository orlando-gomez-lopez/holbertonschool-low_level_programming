#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node - add node to the first position
 * @head: first node
 * @str: string name
 * Return: number of nodes
 **/
list_t *add_node(list_t **head, const char *str)
{
	int n = 0;
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for ( ; str[n] != '\0'; )
		n++;
	new->len = n;
	new->next = *head;
	*head = new;
	return (new);
}
