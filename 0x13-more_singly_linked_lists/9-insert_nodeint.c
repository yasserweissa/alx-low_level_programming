#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to the head of the list
 * @idx: index where the new node should be added, starting at 0
 * @n: value to be stored in the new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp, *prev;
	unsigned int count;

	new_node = malloc(sizeof(listunt_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	prev = NULL;
	count = 0;
	while (temp != NULL && count < idx)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}

	if (count == idx)
	{
		prev->next = new_node;
		new_node->next = temp;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
