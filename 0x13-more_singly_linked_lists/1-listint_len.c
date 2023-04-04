#include "lists.h"
#include <stdio.h>
/**
 * print_listint_len - print the number of nodes
 * listint_t - struct node
 * @h: head
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
