#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * free_list - frees a list_t
 * list_t - struct node
 * @head: first node
 */

void free_list(list_t *head)
{
	list_t *tmp;
	list_t *next;

	tmp = head;

	if (tmp != NULL)
	{
		next = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = next;
	}
}
