#include "main.h"

/**
 * _strlen - a function that takes a pointer to the length of the string
 * @*s: parameter of string
 * Return: length
 */

int _strlen(char *s)
{
	int longi = 0;

	while(*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
