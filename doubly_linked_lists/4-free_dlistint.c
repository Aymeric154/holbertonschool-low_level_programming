#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 *
 * @head: pointer to the header of list
 *
 * Return:
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head != NULL)
	{
		i = head;
		head = i->next;
		free(i);
	}
}
