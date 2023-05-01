#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - check the code
 * @s: pointer
 * Return: return the result.
 */
int _atoi(char *s)
{
	int sign = 1, num = 0, digit;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			if (sign > 0)
			{
			if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10))
				return (INT_MAX);
			}
			else
			{
				if (num < INT_MIN / 10 || (num == INT_MIN / 10 && digit > -(INT_MIN % 10)))
					return (INT_MIN);
			}
			num = num * 10 + digit * sign;
		}
		else if (num != 0)
			break;
		s++;
	}
	return (num);
}
