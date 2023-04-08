#include "main.h"

/**
 *clear_bit - fonction supp a bit
 *@n: bits
 *@index: index for next bits
 *Return: return error or true
*/

	int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
