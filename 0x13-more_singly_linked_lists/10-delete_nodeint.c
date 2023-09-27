#include <stddef.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node to be deleted, starting at 0
 * Return: 1 if the deletion succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	temp = *head;
	prev = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	count = 0;
	while (temp != NULL && count < index)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}

	if (count == index && temp != NULL)
	{
		prev->next = temp->next;
		free(temp);
		return (1);
	}

	return (-1);
}
