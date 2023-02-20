#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Return: always 0
*/

int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
lastdigit =  10 % n;
printf("last digit of %i of %i is \n", n, lastdigit);
	if (n > 5)
		printf("Last digit of %d and is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit %d and is 0\n", n);
	else
		printf("Last digit %d and is less than 6 and not 0 \n", n);
	return (0);

}
