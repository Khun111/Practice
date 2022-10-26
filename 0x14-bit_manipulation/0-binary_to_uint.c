#include "main.h"
/**
 * binary_to_uint - converts binary string to decimal
 * @b: binary string
 * Return: decimal
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int deci = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (!(b[i] == 48 || b[i] == 49))
			return (0);
		deci <<= 1;
		deci += (b[i] - '0');
		i++;
	}
	return (deci);
}
