#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a specific node
 * @head: first node
 * @index: specific node
 * Return: 1 if it succeeded -1 if it failed
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_before, *temp_after, *temp;
	unsigned int total, i;

	if (*head == NULL)
		return (-1);
	temp = *head;
	for (total = 0; temp != NULL; total++)
		temp = temp->next;
	if (index == 0 && *head != NULL)
	{
		temp = (*head)->next;
		temp_after = (*head)->next->next;
		free(*head);
		(*head)->next = temp_after;
		(*head)->prev = NULL;
		*head = temp;
	}
	if (index == total && total != 0)
	{
		temp = *head;
		for (i = 0; i < index; i++)
			temp = temp->next;
		temp_before = temp;
		temp = temp_before->next;
		temp_before->next = NULL;
		free(temp);
	}
	if (index > 0 && index < total && *head != NULL)
	{
		temp = *head;
		for (i = 0; i < index; i++)
			temp = temp->next;
		temp_before = temp->prev;
		temp_after = temp->next;
		temp_after->prev = temp_before;
		temp_before->next = temp_after;
		free(temp);
	}
	return (1);
}
