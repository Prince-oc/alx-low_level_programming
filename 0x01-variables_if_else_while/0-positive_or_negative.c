#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Dtermines if a numer is positive, negtive or zero
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		 printf("%d is negative\n", n);
	}
	else 
	{
		 printf("0 is zero\n");
	}
	return (0);
}
