#include <stdio.h>
#include "main.h"
/**
 * leet - encodes a strings into 1337
 *@s: the encoded strings pointer
 *
 * Return: str
 */
char *leet(char *s)
{
int i, y;
char str1[] = "aAeEoOtTlL";
char str2[] = "443300771";
for (i = 0; s[i] != '\0'; i++)
{
for (y = 0; y < 10; y++)
{
if (s[i] == str1[y])
{
s[i] = str2[y];
}
}
}
return (s);
}
