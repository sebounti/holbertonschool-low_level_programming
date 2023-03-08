#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: gives the number of command line items.
 * @argv: contains the name of the command.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
