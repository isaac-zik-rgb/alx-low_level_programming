#include <stdio.h>
#include "main.h"
/**
 * print_square - Function that print a square
 * @Size: an integer that determines the size
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
  if (size <= 0)
    {
      _putchar('\n');
    }
  else
    {
      int i, x;
      for (i = 0; i < size; i++)
	{
	  for (x = 0; x < size; x++)
	    {
	      _putchar('#');
	    }
	  _putchar('\n');
	}
    }
}
