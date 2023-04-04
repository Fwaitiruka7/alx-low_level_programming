#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>

/**
 * struct listint_s - singly lined lists
 * @n: integer
 * @next: points to the next node
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* function prototype */
size_t print_listint(const listint_t *h);
size_t print_listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif