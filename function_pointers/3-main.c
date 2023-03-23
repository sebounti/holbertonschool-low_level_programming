#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Task 3: program that performs simple operations on integersi
 * @argc: number of string elements in equation
 * @argv: values of the string elements in equation
 * Return: Integer answer if successful.
 */

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
