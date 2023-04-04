#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end -  adds a new node at the end
 * listint_t - struct node
 * @head: first node
 * @n: integer
 * Return: new element and if it fails return NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp2;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp2 = *head;
	while (temp2->next != NULL)
	{
		temp2 = temp2->next;
	}
	temp2->next = new_node;

	return (new_node);
}
