#include <stdio.h>
#include "main.h"
/**
 * _isupper - a function that checks for uppercase
 *@c: returns a character data type
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
  int i;
  for (i = 'A'; i <= 'Z' i++)
    {
      if (c == i)
	return (1);
      else
	return (0);
    }
}

