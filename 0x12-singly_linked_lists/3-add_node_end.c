#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds node at the end of the list
 * @head: double pointer
 * @str: string
 * Return: address for the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	for (current = *head; current->next != NULL; current = current->next)
		;
	current->next = new;
	return (new);
}
