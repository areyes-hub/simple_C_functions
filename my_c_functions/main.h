#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
typedef struct nodes
{
	char *data;
	struct nodes *next;
} node;
char _putchar(char c);
void _puts(char *s);
void print_number(int n);
void _strcat(char *dest, char *source);
void _strcpy(char *dest, char *source);
node *cr_list(node **head, const char *data);
void pr_list(node **head);
#endif
