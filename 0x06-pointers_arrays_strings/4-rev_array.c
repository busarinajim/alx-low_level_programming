#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: an array of integers
 * @n: number of elements to swap
 *
 */

void reverse_array(int *a, int n)
{
	int start, end, temp;
	start = 0;
	end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
