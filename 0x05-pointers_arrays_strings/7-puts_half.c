#include "main.h"

/**
 * puts_half - a function thst prints half of a atring
 * if odd len, n = (lenght_of_string -1 )/2
 * @str: input;
 * Return: half of input
 */
void puts_half(char *str)
{
	int a,n,longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		long++;

	n = (longi / 2)

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
