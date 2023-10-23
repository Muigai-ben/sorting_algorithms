#include<sort.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @nodes: Integer stored in the node
 * @prev: poointer to the previous element of the list
 * @next: pointer to the next element in the node
 */

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
