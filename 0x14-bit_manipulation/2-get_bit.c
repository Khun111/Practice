#include "main.h"
/**
 * get_bit - function to get bit at index
 * @index: index to retreive
 * @n: parameter
 * Return: bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
