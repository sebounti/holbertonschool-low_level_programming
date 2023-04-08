#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint - fonction
 *@b: pointing to a string of 0 and 1 chars
 *Return: result
*/
unsigned int binary_to_uint(const char *b)

{
	unsigned int result = 0;

	if (!b)
	{
	return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
			}
			result = (result << 1) | (*b++ - '0');
			}
			return (result);
}
