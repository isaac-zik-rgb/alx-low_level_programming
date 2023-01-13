#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
41;320;0c * str_concat - concatenate two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * Return: a pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
  char *strn;
  int i, a;
  i = a = 0;
  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";
  while (s1[i] != '\0')
    i++;
  while (s2[a] != '\0')
    a++;
  strn = malloc(sizeof(char) * (i +  a +1));
  if (strn == NULL)
    return (NULL);
  i = a = 0;
  while (s1[i] != '\0')
    strn[i] = s1[i];
  i++;
  while (s2[a] != '\0')
    strn[i] = s2[a];
  i++, a++;
  strn[i] = '\0';
  return (strn);
  
}
