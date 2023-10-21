#include "sort.h"
/**
  * swap - swaps two array elements
  *@array:input pointer
  *@a:first element
  *@b:second element
  *Return:nothing
  */

void swap(int *array, int a, int b)
{
	int temp;

	temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}

/**
  * idx_sm - located the smallest element and returns the index
  *@array:input pointer
  *@start:the first index of array
  *@end:the lsat index of the array
  *Return:index of smallest element
  */
size_t idx_sm(int *array, size_t start, size_t end)
{
	size_t i = start, j;

	j = i;
	while (i <= end)
	{
		if (array[i] < array[j])
		{
			j = i;
		}
		i++;
	}
	return (j);
}
/**
  * selection_sort - sorts an array by looking for the smallest elem
  *@array:the array to be sorted
  *@size:size of the array
  *Return:nothing
  */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j;

	if (!array && size <= 1)
		return;

	while (i < size - 1)
	{
		j = idx_sm(array, i, size - 1);
		swap(array, i, j);
		i++;
		print_array(array, size);
	}
}
