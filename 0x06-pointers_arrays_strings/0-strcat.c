#include <stdio.h>
#include "main.h"
/**
 * _strcat - this function concancinate its strings to another
 *@src: character strings parameter that holds the firs strings
 *@dest: second character strings
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
  int i, b;
  b = 0;
  i= 0;
  while (dest[b] != '\0')
    {
      b++;
    }
  while (src[i] != '\0')
    {
      dest[b] = src[i];
      b++;
      i++;
    }
  dest[b] = '\0';
  return dest;
}
