#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copies n bytes from memory area
 *@dest: copy to
 *@scr: copy from
 *@n: number of bytes to be copied
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
  int i;
  i = 0;
int  r = n;
  for (; i < r; i++)
    {
      src[i] = src[i];
      n--;
    }
  return (dest);
}
