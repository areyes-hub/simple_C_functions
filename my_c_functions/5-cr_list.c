#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * cr_list - creates a linked list
 * @head: The pointer to the linked list
 * @data: The node data
 * Return: A pointer to the list.
 */
node *cr_list(node **head, const char *data)
{
	node *current;
	node *temp;
	char *duplica;

	current = malloc(sizeof(node));
	if (current == NULL)
	{
		return (NULL);
	}

	duplica = strdup(data);

	if (duplica == NULL)
	{
		free(current);
		return (NULL);
	}

	current->data = duplica;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = current;
	}
	return (current);
}
