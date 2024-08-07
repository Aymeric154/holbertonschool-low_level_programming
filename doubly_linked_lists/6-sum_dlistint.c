#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all
 *  the data (n) of a dlistint_t linked list
 *
 *  @head: pointer to the header of list*
 *
 *  Return: 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);

}
