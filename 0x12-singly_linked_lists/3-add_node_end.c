#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - add node to the end of list
 * @head: first node
 * @str: string name
 * Return: number of nodes
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	int n = 0;
	list_t *new;
	list_t *temp;

	new = (list_t *)malloc(sizeof(list_t));
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
