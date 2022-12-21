#include <stdio.h>
#include "main.h"
/**
 * int _atoi - A function tgat covers characters to numbers
 *@s: a pointer that converts
 *
 * Return: Always 0 success
 */
int _atoi(char *s)
{
  int i = 0;
  int max = 1;
  int ise = 0;
  unsigned int nv = 0;
  while (s[i])
    {
      if (s[i] == 45)
	{
	  max *= 1;
	}
      while (s[i] >= 48 && s[i] <= 57)
	{
	  ise = 1;
	  nv = (nv * 10) + (s[i] - '0');
	  c++;
	}
      if (ise == 1)
	{
	  break;
	}
      c++;
    }
  nv *= max;
  return (nv);
}
