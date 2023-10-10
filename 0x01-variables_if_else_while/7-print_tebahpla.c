#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Return
 */
int main(void)
{
	int ascii;

	for (ascii = 122; ascii >= 97; ascii--)
		putchar(ascii);
	putchar('\n');
	return (0);
}
