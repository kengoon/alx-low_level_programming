#include "main.h"

/**
 * __strlen - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int __strlen(char *s)
{
	if (!*s)
		return (0);	
	return (1 + __strlen(s + 1);
}

/**
 * __compare - compares each character of the string.
 * @s: string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 * Return: .
 */
int __compare(char *s, int n1, int n2)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);

}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (!*s)
		return (1);
	return (__compare(s, 0, __strlen(s) - 1));
}

