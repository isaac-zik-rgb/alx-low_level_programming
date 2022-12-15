#include <stdio.h>
#include "main.h"
/**
 * abs - Compute an absolute value of an integer
 *@int: return an integer
 * Return: Always 0(Success)
 */
int _abs(int x)
{
  for (x = 0; x <= 10; x++)
    {
  if (x >= 0)
    {
      return (x);
    }
  else
    {
      return (x -'0');
    }
    }
}

