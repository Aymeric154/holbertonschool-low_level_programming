#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  dlistint_len - function that returns the number of elements
 *  in a linked dlistint_t list.
 *
 * @h: pointer to the header of list
 *
 * Return: the number of elements in linked
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

