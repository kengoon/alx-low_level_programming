/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer to input string.
 * Return: Returns pointer to capitalized string.
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char sep[] = " \t\n,;.!?\"(){}";

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z' && (i == 0 || strchr(sep, s[i - 1])))
			s[i] -= 32;
		i++;
	}
	return (s);
}

