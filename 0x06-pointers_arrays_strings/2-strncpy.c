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
  int m;
  for (m = 0; m < n && scr[m] != '\0' m++)
    {
      dest[m] = src[m];
    }
  while (m < n)
    {
      dest[m] = '\0';
      m++;
    }
  return dest;
}

