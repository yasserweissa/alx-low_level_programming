#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds new node at the end of a list_t list
 * @head: a pointer to a pointer to a list_t list
 * @str: string
 * Return: address of new node, or NULL if unsuccessful
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		list_t *current = *head;

		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
	}

	return (new_node);
}
