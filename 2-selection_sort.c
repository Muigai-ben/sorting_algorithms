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
  * selection_sort - sorts an array by looking for the smallest elem
  *@array:the array to be sorted
  *@size:size of the array
  *Return:nothing
  */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j, min;

	if (!array && size <= 1)
		return;

	while (i < size - 1)
	{
		min = i;
		j = i + 1;

		while (j < size)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
			j++;
		}
		if (min != i)
		{
			swap(array, i, min);
			print_array(array, size);
		}
		i++;
	}

}
