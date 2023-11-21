#include "sort.h"

/**
 * quick_sort - Quick sort algorithm
 * @array: Array to swap elements
 * @size: Size of array
 */

void quick_sort(int *array, size_t size)
{
if (array)
quicksort(array, size, 0, size - 1);
}

/**
 * partition - Partitions array based on pivot
 * @array: Array to sort
 * @size: Size of array
 * @lo: Start index
 * @hi: End index
 *
 * Return: Position of partition
 */

int partition(int *array, size_t size, int lo, int hi)
{
int pivot, i, j;

pivot = array[hi];
i = lo - 1;
for (j = lo; j < hi; ++j)
if (array[j] < pivot)
{
++i;
swap_and_print(array, size, i, j);
}
++i;
swap_and_print(array, size, i, hi);
return (i);
}

/**
 * quicksort - Recursive function
 * @array: Array to swap elements
 * @size: Size of array
 * @lo: Start index
 * @hi: End index
 */

void quicksort(int *array, size_t size, int lo, int hi)
{
int pivot_index;

if (lo < hi)
{
pivot_index = partition(array, size, lo, hi);
quicksort(array, size, lo, pivot_index - 1);
quicksort(array, size, pivot_index + 1, hi);
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
