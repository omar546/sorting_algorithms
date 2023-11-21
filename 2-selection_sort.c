#include "sort.h"

/**
* selection_sort - Selection sort algorithm
* @array: Array to sort
* @size: Size of array
*/

void selection_sort(int *array, size_t size)
{
size_t out, in;
int current, min_position, need_swap;

need_swap = 0;
if (array)
{
for (out = 0; out < size; ++out, current = array[out], need_swap = 0)
{
for (in = out; in < size; ++in)
{
if (current > array[in])
{
current = array[in];
min_position = in;
need_swap = 1;
}
}
if (need_swap)
swap_and_print(array, size, out, min_position);
}
}
}

/**
 * swap_and_print - Swaps specified array elements then prints array
 * @array: Array to swap elements
 * @size: Size of array
 * @i: First index to swap
 * @j: Second index to swap
 */
void swap_and_print(int *array, size_t size, int i, int j)
{
int temp;

temp = array[j];
if (array[i] != array[j])
{
array[j] = array[i];
array[i] = temp;
print_array(array, size);
}
}
