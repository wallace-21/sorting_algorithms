#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: Pointer to the doubly linked list
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *key;
	listint_t *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	current = (*list)->next;
	while (current != NULL)
	{
		key = current;
		while (key->prev != NULL && key->n < key->prev->n)
		{
			temp = key->prev;
			key->prev = temp->prev;
			temp->next = key->next;

			if (key->next != NULL)
			{
				key->next->prev = temp;
			}

			key->next = temp;
			temp->prev = key;
			if (key->prev != NULL)
			{
				key->prev->next = key;
			}
			else
				`
			*list = key;
			print_list(*list);
		}

		current = current->next;
	}
}
