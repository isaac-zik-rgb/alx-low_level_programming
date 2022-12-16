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
  if (c >= 65 && c <= 90)
    return (1);
  else
    return (0);
}
