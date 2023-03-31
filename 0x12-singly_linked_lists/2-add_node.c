#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beg of a list_t list
 * @list_t - struct node
 * @head: function pointer
 * @str: char holder
 * Return: if fail NULL and return address of new address
 * if successful
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL || head == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node = malloc(sizeof(list_t));
		new_node->str = strdup(str);
		if (new_node->str != NULL)
		{
			new_node->len = strlen(str);
			new_node->next = *head;
			*head = new_node;
		}
		else
		{
			free(new_node);
			return (NULL);
		}
	}
	return (new_node);

}
