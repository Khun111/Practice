#include "main.h"
/**
 * flip_bits - function to count bits needed to be flipped
 * @n: first number
 * @m: second
 * Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int unmatch = n ^ m, set = 0;

	while (unmatch)
	{
		if (unmatch & 1)
			set++;
		unmatch >>= 1;
	}
	return (set);
}
