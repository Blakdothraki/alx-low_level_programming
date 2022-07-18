#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a  linked lists
 * @h: head of the linked lists
 * Return: The number of nodes of the linked lists
 */
 
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}

	return (i);
}

