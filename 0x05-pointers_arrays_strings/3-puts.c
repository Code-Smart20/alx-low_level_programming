#include "main.h"

/**
 * _puts - a function prints a char to the stdout
 * @str: A string to printed
 * Return : 0
 */
void _puts(char *str)
{
	while (*str != "\0")
	{
		_putchar(*str);
		s++;
	}

	_putchar("\0");

	Return (0);

}
