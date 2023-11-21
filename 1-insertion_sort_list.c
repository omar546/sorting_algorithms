#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order
 *                       using the Insertion sort algorithm.
 * @list: Pointer to the head of the doubly linked list.
 */

void insertion_sort_list(listint_t **list)
{
listint_t *now, *temp;

if (list && *list && (*list)->next)
{
for (now = (*list)->next; now; now = now->next)
{
temp = now;
while (temp->prev && now->n < temp->prev->n)
swapp_list(*list, temp->prev, temp);
}
}
}


/**
 * swap_node - Swap a node with its previous one in a doubly linked list.
 * @node: The node to be swapped.
 * @list: Pointer to the head of the doubly linked list.
 * Return: The new position of the swapped node.
 */
listint_t *swap_node(listint_t *node, listint_t **list)
{
listint_t *prev = node->prev;

if (prev)
{
prev->next = node->next;
if (node->next)
node->next->prev = prev;

node->next = prev;
node->prev = prev->prev;
prev->prev = node;

if (node->prev)
node->prev->next = node;
else
*list = node;
}

return node;
}
