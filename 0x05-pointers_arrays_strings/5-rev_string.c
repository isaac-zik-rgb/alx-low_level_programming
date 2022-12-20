#include <stdio.h>
#include "main.h"
/**
 * rev_string - this function reverses a strings
 * @s: A character data type is paased as a pointer parameter
 *
 * Return: Always 0 success
 */
void rev_string(char *s)
{
  int i, x;
char t;
/*finding strings length without null*/
for(i = 0; i != '\0'; i++)
  /*swaping the srings by looping half the strings*/
  for (x = -1;  x < i / 2; x--)
    {
      t = s[x];
      s[x] = s[i - 1 - x];
/*because the string of the array start with 0, -1*/
s[i -1 -x] = t;
}
}
