#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - Sort a doubly linked list of integers
 * @list: A pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *insert_pos;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		temp = current;
		current = current->next;

		/* Move temp to its correct position in the sorted part of the list */
		insert_pos = temp->prev;
		while (insert_pos && insert_pos->n > temp->n)
		{
			/* Swap the nodes */
			insert_pos->next = temp->next;
			if (temp->next)
				temp->next->prev = insert_pos;
			temp->prev = insert_pos->prev;
			temp->next = insert_pos;
			if (insert_pos->prev)
				insert_pos->prev->next = temp;
			insert_pos->prev = temp;

			/* If temp was at the head of the list */
			if (!temp->prev)
				*list = temp;

			insert_pos = temp->prev;
		}

		/* Print the list after every swap */
		print_list(*list);
	}
}
