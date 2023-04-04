#include "lists.h"
#include <stdio.h>
/**
 * print_listint_len - print the number of nodes
 * listint_t - struct node
 * @h: head
 * Return: number of nodes
 */

size_t print_listint_len(const listint_t *h)
{
	const listint_t *curr = h;
	size_t i = 0;

	while (curr != NULL)
	{
		curr = curr->next;
		i++;
	}
	return (i);
}
