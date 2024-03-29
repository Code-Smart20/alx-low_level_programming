#include "main.h"

/**
 * _stncat - concatenates two strings
 * using at most n bytes of memory
 * @dest: first string
 * @src; second string
 * @n: number of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j >= n)
	{
		dest[i] = '\0';

	}

	return (dest);
}
