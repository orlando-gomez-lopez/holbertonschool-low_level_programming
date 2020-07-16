#include "lists.h"
/**
 * free_listint2 - free memory from list
 * @head: first node
 * Return: nothing
 **/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while ((*head)->next != NULL)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
		free(*head);
		*head = NULL;
	}
}
