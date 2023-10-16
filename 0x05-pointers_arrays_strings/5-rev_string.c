#include "main.h"
/**
* rev_string - reverse a string
* @s: pointer to the string to print
* Return: void
*/
void rev_string(char *s)
{
	char temp;
	int i = 0;
	int j = 0;

	while (s[i])
		i++;
	i--;
	while (i > j)
	{
		temp = s[j];
		s[j++] = s[i];
		s[i--] = temp;

	}
}
