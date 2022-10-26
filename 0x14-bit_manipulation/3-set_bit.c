#include "main.h"
/**
 * set_bit - replaces bit at index to 1(ON)
 * @n: parameter
 * @index: position
 * Return: 1 on success
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
		return (-1);
	*n |= 1 << index;
	return (1);
}
