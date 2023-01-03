#include <stdio.h>
#include "main.h"
/**
 * _memset - fills the n bytes with the constant byte b
 *@s: A pointer to the n memory
 *@b: constant bytes that fills the n memory
 *@n: memory byte that will be filled
 *Return: a pointer to the n byte
 */
char *_memset(char *s, char b, unsigned int n)
{
 int i;
 i = 0;
 while (i > 0)
   {
     s[i] = b;
     i++;
    n--;
   }
 
  return (s);
}
