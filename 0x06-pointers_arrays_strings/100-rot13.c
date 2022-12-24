#include <stdio.h>
#include "main.h"
/**
 * rot13 - encodes strings in rot13
 *@n: the pointer to the strings
 *
 * Return: n
 */
char *rot13(char *n)
{
  int i;
  i = 0;
  while (n[i])
  {
  while ((n[i] >= 'a' && n[i] <= 'z') ||
 (n[i] >= 'A' && n[i] <= 'Z'))
 {
 if ((n[i] > 'm' && n[i] <= 'z') || (n[i] > 'M' && <= 'Z'))
 {
 n[i] -= 13;
 break;
 }
 n[i] += 13;
 break;
 }
 i++;
 }
 return (n);
 }