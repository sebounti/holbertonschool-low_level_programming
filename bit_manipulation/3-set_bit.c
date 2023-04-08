#include "main.h"

/**
 *set_bit - fonction set a value of bit with index
 *@n: bits
 *@index: index of bits
 *Return: return error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
