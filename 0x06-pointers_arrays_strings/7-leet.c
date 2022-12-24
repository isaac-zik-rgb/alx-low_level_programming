#include <stdio.h>
#include "main.h"
/**
 * leet - encodes a strings into 1337
 *@str: the encoded strings pointer
 *
 * Return: str
 */
char *leet(char *str)
{
  int i, y;
  char str1[] = "aAeEoOtTlL";
  char str2[] = "443300771";
  for (i = 0; i < 10 && str1[i] != '\0'; i++)
    {
      for (y = 0; y < 10 && str2[y] != '\0'; y++)
	{
	  if (str1[i] == str2[y])
	    {
	      str2[y] = str1[i];
	    }
	}
    }
  return (str);
    }
