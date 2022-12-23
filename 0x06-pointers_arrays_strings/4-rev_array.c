#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverses an array order
 *@a: 
 *@n: number of elements in tge array
 * Return: reversed arrary
 */
void reverse_array(int *a, int n)
{
  int i;
  int j;
  for (i = 0; i < n; i++)
    {
      j = a[i];
      a[i] = a[n];
      j = a[n];
    }
}

  
