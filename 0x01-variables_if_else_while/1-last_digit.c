#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int l_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_d = n % 10
	printf("Last digit of %d is %d ", n, l_d);
	if (l_d > 5)
		printf("and is greater than 5");
	else if (l_d == 0)
		printf("and is 0");
	else if (l_d < 6)
		printf("and is less than 6 and not 0");
	printf("\n");
	return (0);
}
