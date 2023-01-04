#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)

{
int add1, add2, z;
add1 = 0;
add2 = 0;
for (z = 0; z < size; z++)
{
add1 = add1 + a[z * size + z];
}
for (z = size - 1; z >= 0; z--)
{
add2 += a[z * size + (size - z - 1)];
}
printf("%d, %d\n", add1, add2);
}
