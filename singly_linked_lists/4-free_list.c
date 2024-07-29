#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 *
 * @head: pointer header of the list
 *
 * Return:
 */

void free_list(list_t *head)
{
	list_t *i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i);
	}
}
