#include <stdio.h>
#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: the destination strings
 * @src: the source strings
 * @n: the n bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
  int i, x;
  i = 0;
  x = 0;
  while (dest[i] != '\0')
    {
      i++;
    }
  if (src[x] = n || src[x] = n++)
    {
      x++;
    
  while (src[x] != '\0')
    {
      dest[i] = src[x];
      i++;
      x++;
    }
    }
  dest[i] = '\0';
  return (dest);
}
