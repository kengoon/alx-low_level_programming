#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 47; i <= 57; ++i)
	{
		for (j = i + 1; j <= 57; ++j)
		{
			for (k = j + 1; k < 57; ++k)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i != 55 || j != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
