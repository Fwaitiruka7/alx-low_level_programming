#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t
 * list_t - struct node
 * @head: first node
 * @str: string
 * Return: if failed NULL and if successful address of element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node = malloc(sizeof(list_t));
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			struct list_s *tmp = *head;

			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = new_node;
		}
	}
	return (new_node);
}
