#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns no. of element in linked list
 * list_t - struct node
 * @h: head node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t no = 0;

	while (h != 0)
	{
		h = h->next;
		no++;
	}
	return (no);
}
