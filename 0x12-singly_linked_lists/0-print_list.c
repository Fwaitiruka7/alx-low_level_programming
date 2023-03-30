#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list
 * @list_t - struct node
 * @h: list array
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] (%s)\n", h->len, h->str);
		}
		n += 1;
		h = h->next;
	}
	return (n);
	printf("\n");
}
