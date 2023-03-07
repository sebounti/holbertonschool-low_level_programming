#include "main.h"

/**
 * _pow_recursion - Renvoie la valeur de x élevée à la puissance y.
 * @x: La base.
 * @y: L'exposant.
 *
 * Return: La valeur de x élevée à la puissance y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
