#include <stdio.h>

/**
 * main - Entry point
 * Description: print 2 different numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	int n;

	for (ch = 48; ch <= 57; ch++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > ch)
			{
				putchar(ch);
				putchar(n);
				if (ch != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

putchar(10); /* this is an ascii code for new line*/

return (0);
}
