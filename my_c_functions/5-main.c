#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
	node *head;

	head = malloc(sizeof(node));

	cr_list(&head, "Angel");
	cr_list(&head, "Licy");
	cr_list(&head, "Isabel");

	pr_list(&head);

	return (0);
}
