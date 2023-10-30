#include <stdio.h>

/**
* main -> This is a function that print its file name
* @argc: argc is a parameter
* @argv: an array of a command line listed
* Return: 0 for success
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
