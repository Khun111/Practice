#include "main.h"
/**
 * print_binary - prints binary of decimal
 * @n: decimal
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);
	_putchar(n % 2);
}
