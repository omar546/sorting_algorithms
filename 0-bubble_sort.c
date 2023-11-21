#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *               the Bubble Sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */

void bubble_sort(int *array, size_t size)
{
size_t i, indx;
int temp;
int swapped;

if (size < 2)
return;

for (i = 0; i < size - 1; i++)
{
swapped = 0;

for (indx = 0; indx < size - i - 1; indx++)
{
if (array[indx] > array[indx + 1])
{
temp = array[indx];
array[indx] = array[indx + 1];
array[indx + 1] = temp;
print_array(array, size);
swapped = 1;
}
}
if (swapped == 0)
break;
}
}
