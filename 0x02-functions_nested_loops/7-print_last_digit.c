#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 *
 */
int print_last_digit(int x)
{
  int i;
  if (x < 0)
    {
      x = -x;
    }
  i = x % 10;
  if (i < 0)
    {
      i = -i;
    }
  _putchar(i +'0');
  return(i);
}

