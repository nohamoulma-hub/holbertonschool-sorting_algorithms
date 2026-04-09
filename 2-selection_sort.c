#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: Pointer to the array to sort
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, minimum;
	int tmp;

	for (i = 0; i < size; i++)
	{
		minimum = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minimum])
			minimum = j;
		}
		if (minimum != i)
		{
			tmp = array[i];
			array[i] = array[minimum];
			array[minimum] = tmp;
			print_array(array, size);
		}
	}
}
