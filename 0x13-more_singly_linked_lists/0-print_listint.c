#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements in list
 * listint_t - list node
 * @h: head
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t i = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
