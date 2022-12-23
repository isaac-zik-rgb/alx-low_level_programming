#include <stdio.h>
#include "main.h"
/**
 * _strncpy - function that copies  strings
 *@dest: copies to
 *@src: copies from
 *@n: then number of bytes copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
  int m, p;
  p = 0;
  while (dest[p] != '\0')
    {
      p++;
    }
  for (m = 0; src[m] < n; m++)
    {
      dest[p] = src[m];
    }
  dest[p] = '\0';
  return dest;
}

