#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * free_list - free memory from list
 * @head: first node
 * Return: nothing
 **/
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	if (temp != NULL)
	{
		while (temp != NULL)
		{
			free(temp->str);
			free(temp);
			temp = temp->next;
		}
	}
}
