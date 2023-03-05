#include "main.h"
/**
 * print_chessboard - prints the chessboard
 *@a: pointer to an array of 8
 */

void print_chessboard(char (*a)[8])
{
	int hor, ver;

	for (hor = 0; hor < 8; hor++)
	{
		for (ver = 0; ver < 8; ver++)
		{
			_putchar(a[hor][ver]);
		}
		_putchar('\n');
	}
}
