#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies an array character to another
 * @dest: Return the copied array
 * @src: holds the character arrays
 * Return: Always 0 success
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
