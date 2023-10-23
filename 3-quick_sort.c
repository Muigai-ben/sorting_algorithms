#include "sort.h"
/**
  * swap - swaps two values
  *@array:input pointer
  *@x:first value
  *@y:second value
  *@size:size of array
  */
void swap(int *array, int x, int y, size_t size)
{
	int temp;

	if (array[x] != array[y])
	{
		temp = array[x];
		array[x] = array[y];
		array[y] = temp;
		print_array(array, size);
	}
}

/**
  * partition - divides the array into to using the pivot
  *@array:input pointer
  *@low:first index of array
  *@high:last index of array
  *@size:size of array
  *Return:index of pivot value
  */
int partition(int *array, int low, int high, size_t size)
{
	int i, j, pivot_value;

	pivot_value = array[high];
	i = low;
	j = low;
	while (j <= high)
	{
		if (array[j] < pivot_value)
		{
			swap(array, i, j, size);
			i++;
		}
		j++;
	}
	swap(array, i, high, size);
	return (i);
}

/**
  * quick_recursion - recursively sorts the array
  *@array:input pointer
  *@low:first index
  *@high:last index
  *@size:size of array
  */
void quick_recursion(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, low, high, size);
		quick_recursion(array, low, pivot_index - 1, size);
		quick_recursion(array, pivot_index + 1, high, size);
	}
}
/**
  * quick_sort - sroing algorithm
  *@array:input pointer
  *@size:size of array
  */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quick_recursion(array, 0, size - 1, size);
}
