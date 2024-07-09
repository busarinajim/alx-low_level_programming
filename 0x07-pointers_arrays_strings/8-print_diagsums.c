#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sums of diagnonal numbers
 * @a: matrix in linear
 * @size: size of matrix
 * Return: sums
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int primary_diag_sum = 0;
	int secondary_diag_sum = 0;

	for (i = 0; i < size; i++)
	{
		primary_diag_sum += a[i * size + i];
		secondary_diag_sum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", primary_diag_sum, secondary_diag_sum);
}
