#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
        char *strout;
        unsigned int a, b;

        if (!str)
                return (NULL);

        for (a = 0; str[a] != '\0'; a++)

        strout = malloc(sizeof(char) * (a + 1));

        if (!strout)
                return (NULL);

        for (b = 0; b <= a; b++)
                strout[b] = str[b];

        return (strout);
}

