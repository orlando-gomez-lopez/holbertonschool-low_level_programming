#include "lists.h"
/**
 * free_listint - free memory from list
 * @head: first node
 * Return: nothing
 **/
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	if (temp != NULL)
	{
		while (temp != NULL)
		{
			free(temp);
			temp = temp->next;
		}
	}
}
