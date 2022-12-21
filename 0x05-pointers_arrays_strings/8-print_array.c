#include <stdio.h>
#include "main.h"
/**
 * print_array - a function that prints array
 *@a:  have a character pointer
 *@n: returns an integer
 * Return: Always 0 success
 */
void print_array(int *a, int n)
{
  int i;
  for (i = 0; i < n; i++)
    {
      printf("%d", a[i]);
      if (i != (n - 1))
      {
	printf(", ");
      }
    }
  printf("\n");
}
