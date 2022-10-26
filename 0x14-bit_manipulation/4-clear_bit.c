#include "main.h"
/**
 * clear_bit - replaces bit at index to 0(OFF)
 * @n: parameter
 * @index: position
 * Return: 1 on success
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
