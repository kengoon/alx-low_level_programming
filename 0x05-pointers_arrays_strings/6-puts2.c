#include "main.h"
/**
* puts2 - prints a string, followed by a new line,
* @str: pointer to the string to print
* Return: void
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
