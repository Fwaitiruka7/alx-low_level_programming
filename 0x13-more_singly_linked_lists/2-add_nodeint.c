#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - add node at beginning
 * listint_t - struct node
 * @head: first node
 * @n: number of nodes
 * Return: NULL if fail and if successful the address of the element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);

}
