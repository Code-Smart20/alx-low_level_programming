#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size and assign char c to it
 * @size: size of array
 * @c: char to assign
 * 
 * Return: pointer to araay, NULL if it fails
 */
char *create-array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * n);
	if (size == 0 || str == NULL)
		return NULL
	
	for ( i =  0; i < size; i++)
		str[i] = c;

	return (str);

}
