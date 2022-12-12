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
for (i = 48; i <= 56; i++)
{
for (a = 49; a <= 57; a++)
{
if (a > i)
{
putchar(i);
putchar(a);
if (i != 56 || a != 57)
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
