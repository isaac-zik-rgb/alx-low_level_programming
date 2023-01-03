#include "main.h"
/**
 * _memcpy - copy n bytes of memory to another
 *@dest: copy to
 *@src: copy from
 *@n: number of bytes to copy to
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
int r = n;
for (; i < r; i++)
{
dest[i] = src[i];
n--;
}
return (dest);
}
