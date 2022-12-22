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
  int i;
  for (i = 0; src[i] != '\0'; i++)
    {
      src[i] += dest[i];
    }
  dest[i++] = '\0';
  return (dest);
}
