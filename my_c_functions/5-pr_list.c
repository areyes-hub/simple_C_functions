#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pr_list - prints the data of a linked list
 * @head: List to print
 * Return: void.
 */
void pr_list(node **head)
{
	int count = 1;

	*head = (*head)->next;
	while (*head)
	{
		printf("node [%d]: %s\n", count, (*head)->data);
		*head = (*head)->next;
		count++;
	}
}
