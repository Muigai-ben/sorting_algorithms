#include "sort.h"
/**
 * insertion_sort_list - insertion sort list algorthms
 * @list: list pointer
 * Return: No Return
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *swap, *tmp;

<<<<<<< HEAD
	if (!list || *list == NULL)
		return;
	curr = *list;
	/* validate if there is only one element in list */
	if (curr->next == NULL)
		return;
	while (curr->next != NULL)
	{
		swap = curr->next;
		/* Comparison starts here */
		if (curr->n > swap->n)
		{
			tmp = curr;
			while (tmp != NULL && tmp->n > swap->n)
			{
				tmp->next = swap->next;
				if (tmp->next != NULL)
					tmp->next->prev = tmp;
				swap->prev = tmp->prev;
				if (swap->prev != NULL)
					swap->prev->next = swap;
				else
					*list = swap;
				tmp->prev = swap;
				swap->next = tmp;
				print_list(*list);
				tmp = swap->prev;
			}
			continue;
		}
		curr = curr->next;
	}
}
=======
void insertion_sort_list(listing_t **list)
{

	listing_t *nodes, *prev, *next;

	if (!*list || !(*list)->next)

	return;
	for nodes = (*list)->next; nodes != NULL; node=tmp)
{
	tmp = node->next;
		insert = node->prev;
		while (insert != NULL && node->n < insert->n)
		{
		{
>>>>>>> 81dd6431ed1c2e5a0936ce5341d76c0b7fa7ac69
