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
	const list_t *cur = h;
	size_t n = 0;

	while (cur != NULL)
	{
		if (cur->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] (%s)\n", cur->len, cur->str);
		}
		n++;
		cur = cur->next;
	}
	return (n);
}
