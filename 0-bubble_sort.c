#include "sort.h"
/**
 * swap - swaps two elements at arr
 * @array:the array whose elements are to be swapped
 * @a:the first element to swap
 * @b:the second element to swap
 * Return:nothing
 */

void swap(int *array, int a, int b)
{
	int temp;

	temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}

/**
 * bubble - compares elements at array and swaps them
 * @array:poinret to the array
 * @size:the size of the array
 * Return:nothing
 */

void bubble(int *array, size_t size)
{
	size_t i = 0;

	while (i < size - 1)
	{
		if (array[i + 1] < array[i])
		{
			swap(array, i, i + 1);
			print_array(array, size);
		}
		i++;
	}
}

/**
 * bubble_sort - sorts the elements of the array
 * @array:pointer to the array
 * @size:size of array
 * Return:nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;

	if (size < 2)
		return;

	while (i < size - 1)
	{
		bubble(array, size);
		i++;
	}
}
