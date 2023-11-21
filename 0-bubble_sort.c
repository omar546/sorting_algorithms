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
	int swapped;  // a variable to track whether any swaps occurred

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		// Optimization: If no swaps occur in a pass, the array is already sorted
		swapped = 0;

		for (indx = 0; indx < size - i - 1; indx++)
		{
			// Fixing the inner loop condition and array bounds check
			if (array[indx] > array[indx + 1])
			{
				temp = array[indx];
				array[indx] = array[indx + 1];
				array[indx + 1] = temp;
				print_array(array, size);
				swapped = 1;  // Set swapped to true if a swap occurs
			}
		}

		// If no swaps occurred, the array is already sorted, and we can exit early
		if (swapped == 0)
			break;
	}
}
