#include <stdio.h>
/**
 * main - A program that print  three different combinations
 *
 * Return: 0 (Success)
 */
int main(void)
{
  int s, a, i;
  for (s = 48; s < 58; s++)
    {
       for (a = 49; a < 58; a++)
	{
	  for (i = 50; i < 58; i++)
	    {
	    
	      if (s < a  &&  a < i)
		{
	       
	      putchar(s);
	  putchar(a);
	  putchar(i);
	      
	  if (s != 55 || a != 56)
	    {
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

