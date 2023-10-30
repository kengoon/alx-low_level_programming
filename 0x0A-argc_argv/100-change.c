#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int i;
	int total_cents = 0;
	int cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	for (i = 0; i < 5 && cent > 0; i++)
	{
		int cent_div = cent / coins[i];

		cent %= coins[i];
		if (!cent_div)
			continue;
		total_cents += cent_div;
	}
	printf("%d\n", total_cents);
	return (0);
}
