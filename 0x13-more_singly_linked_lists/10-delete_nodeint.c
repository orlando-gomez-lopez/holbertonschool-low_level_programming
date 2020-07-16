#include "lists.h"
/**
 * delete_nodeint_at_index - delete a specific node
 * @head: first node
 * @index: specific node
 * Return: 1 if it succeeded -1 if it failed
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_before, *temp_after, *temp;
	unsigned int total, i;

	temp = *head;
	for (total = 0; temp != NULL; total++)
		temp = temp->next;
	temp = *head;
	if (index == 0)
	{
		temp = (*head)->next;
		free(head);
		*head = temp;
	}
	if (index == total)
	{
		temp = *head;
		for (i = 0; i < index; i++)
			temp = temp->next;
		temp_before = temp;
		temp = temp_before->next;
		temp_before->next = NULL;
		free(temp);
	}
	temp = *head;
	if (index > 0 && index < total)
	{
		for (i = 0; i < index; i++)
			temp = temp->next;
		temp_before = temp;
		temp = *head;
		for (i = 0; i < (index + 1); i++)
			temp = temp->next;
		temp_after = temp;
		temp_before->next = temp_after;
		free(temp);
	}
	return (1);
}
