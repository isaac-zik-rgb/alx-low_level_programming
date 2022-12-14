#include <stdio.h>
#include "main.h"
/**
 * _islower - A function that checks lower characters
 *
 * Return: 1 success
 */
int _islower(int c)
{
  return (c >='a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
