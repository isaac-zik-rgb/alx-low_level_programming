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
  int i, x, y;
  char *a, xyz;
  a = s;
  while (s[i] != '\0')
    {
      i++;
    }
/*finding strings length without null*/
for(x = 1; x < i; i++)
  {
    a++;
  }
  /*swaping the srings by looping half the strings*/
 for (y = 0;  y < (i / 2); y++)
     {
       xyz = s[y];
       s[y] = *a;
       *a = xyz;
       a--;
       /*because the string of the array start with 0, -1*/
     }
}
