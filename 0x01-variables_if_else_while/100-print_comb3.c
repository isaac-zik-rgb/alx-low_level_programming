#include <stdio.h>
/**
 * main - combination of posible numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i;
int a;
for (i = 48; i <= 57; i++)
{
for (a = 49; a <= 56; a++)
{
if (a > i)
{
putchar(i);
putchar(a);
if (i != 57 || a != 56)
{
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
