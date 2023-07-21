#include "sort.h"

/**
 * swap_ints - Swaps two integers in an array.
 * @array: The array containing the integers to swap.
 * @a: The index of the first integer to swap.
 * @b: The index of the second integer to swap.
 * 
 * Description: The function takes an array of integers
 * and swaps the values at the given indices.
 * 
 * Return: Void.
 */

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble Sort algorithm.
 * @array: Pointer to the array of integers to be sorted.
 * @size: The number of elements in the array.
 *
 * Description: The function implements the Bubble Sort algorithm
 * to arrange the elements in ascending order.
 * 
 * Return: Void.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
 *
