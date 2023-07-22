#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints the elements of a linked list.
 *
 * @list: Pointer to the head of the linked list.
 *
 * Description:
 * This function takes the head of a linked list and prints its elements.
 *
 * Return: Void
 */

void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}
