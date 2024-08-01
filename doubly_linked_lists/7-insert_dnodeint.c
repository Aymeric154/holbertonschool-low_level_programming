#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *insert_dnodeint_at_index - function that inserts
 *  a new node at a given position.
 *
 *  @h: pointer to the header of list
 *  @idx: is the index of the list
 *  @n: is an integer
 *
 *  Return:  the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current;
	unsigned int count;

	if (h == NULL || new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	current = *h;

	while (current != NULL)
	{
		if (count == idx)
		{
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->prev = current->prev;
			new_node->next = current;

			if (current->prev != NULL)

				current->prev->next = new_node;
			else
				*h = new_node;
			current->prev = new_node;

			return (new_node);
		}
		count++;
		current = current->next;
	}
	if (count == idx)
		return (add_dnodeint_end(h, n));
	free(new_node);
	return (NULL);
}




