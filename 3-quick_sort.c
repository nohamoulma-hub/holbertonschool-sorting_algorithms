#include "sort.h"

/**
* swap - swaps two integers
* @a: first int
* @b: second int
*/
void swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

/**
* partition - Lomuto partition scheme
* @array: array to sort
* @low: starting index
* @high: ending index
* @size: size of array (for printing)
*
* Return: pivot index
*/
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];

	int i = low;

	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}

	if (i != high)
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}

	return (i);
}

/**
* quick_sort_recursive - recursive quick sort
* @array: array to sort
* @low: start index
* @high: end index
* @size: size of array
*/
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quick_sort_recursive(array, low, pivot - 1, size);
		quick_sort_recursive(array, pivot + 1, high, size);
	}
}

/**
* quick_sort - sorts an array using quick sort
* @array: array to sort
* @size: size of array
*/
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}
