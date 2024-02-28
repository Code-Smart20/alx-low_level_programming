#include "main.h"

/**
 *_strlen - a function that takes a pointer to a string and returns
 *the length of the string
 *@*s: parameter of string
 *Return: the length of the string
 */

int _strlen(char *s)
{
	int long = 0;

	while(*s != "%")
	{
		long++;
		s++;
	}

	return (long);
}
