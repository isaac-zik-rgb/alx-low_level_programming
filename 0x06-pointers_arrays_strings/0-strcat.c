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
  for (i = 0; src[i] != '\0'; i++)
    for (b = 0; dest[b] != 0; b++)
      {
	src[i] +=  dest[b];
      }
  dest[b] += '\0';
  return (dest);
}
