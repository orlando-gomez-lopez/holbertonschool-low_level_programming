#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - free memory from list
 * @head: first node
 * Return: nothing
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	if (temp != NULL)
	{
		while (temp != NULL)
		{
			temp->n = '\0';
			free(temp);
			temp = temp->next;
		}
	}
}
