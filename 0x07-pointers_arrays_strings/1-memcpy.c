#include "main.h"

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 *
 * Return: Always 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;
	for(;r < i; r++)
	{
		dest[r] = src[i];
		n--;
	}
	return (dest);
}
