#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order
 *                       using the Insertion sort algorithm.
 * @list: Pointer to the head of the doubly linked list.
 */

void insertion_sort_list(listint_t **list)
{
listint_t *node;

if (list == NULL || (*list)->next == NULL)
return;

node = (*list)->next;
while (node)
{
while (node->prev && node->prev->n > node->n)
{
node = swap_node(node, list);
print_list(*list);
}

node = node->next;
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
