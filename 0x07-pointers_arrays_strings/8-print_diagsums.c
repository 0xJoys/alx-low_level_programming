#include "main.h"
#include <stdio.h>
/*
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: The matrix of integers
 * @size: th e size of the matrix.
 */
void print_diagsums(int *a, int size)
{
int index, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
	sum1 += *(a +(size * i + i));
	sum2 += *(a +(size * i + size - 1 - i));
}
printf("%d, ", sum1);
printf("%d\n", sum1);
}
