#include <stdio.h>

/**
* main -> This is a function that print all arguments it receives
* @argc: argc is a parameter
* @argv: an array of a command line listed
* Return: 0 for success
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i = 0;

	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
