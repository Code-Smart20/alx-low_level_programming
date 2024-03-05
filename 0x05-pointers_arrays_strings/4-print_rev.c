#include "main.h"

/**
 * print_rev - prints a string in reverse 
 * @s: a parameter of string to print in reverse order
 * Return : Always 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{	
		long++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');

	Return (0);
}
