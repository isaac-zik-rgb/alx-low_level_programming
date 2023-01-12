#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *create_array -create an arrary of chars
 *@size: the size of memory to allocate
 *@c: a character in tge array
 *Return: NULL
 */
char *create_array(unsigned int size, char c)
{
unsigned int y;
char *str;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (y = 0; y < size; y++)
str[y] = c;
return (str);
}
