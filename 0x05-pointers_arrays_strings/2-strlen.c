#include "main.h"

/**
 * _strlen - a function that takes a pointer to a string and returns
 * the length of the string
 * @*s: parameter of string
 * Return: length
 */

int _strlen(char *s)
{
	int long = 0;

	while(*s != '\0')
	{
		long++;
		s++;
	}

	return (long);
}
