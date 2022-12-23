#include <stdio.h>
/**
 * main - print a combination of numbers tgat range from 00 to 99
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
  int i, s, j, n;
  for (i = 48; i <=57; i++)
    {
      for (s = 48; s <= 56; s++)
	{
	  for (j = 48; j <= 58; j++)
	    {
	      for (n = 49; n < 58; n++)
		{
		  if (n > i || s > j) 
		{
		  putchar(i);
		putchar(s);
		putchar(32);
		putchar(j);
		putchar(n);
		if (s <= 57 || n <= 57)
		    
	       putchar(44);
		putchar(32);  
	       }
	       }
	       }
	       }
	       }
	       putchar(10);
	       return (0);
	       }
