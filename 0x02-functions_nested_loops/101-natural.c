#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Computes and prints the sum of all
 * the multiples of 3 or 5 below 1024.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum = 0;
	int j;

	/* iterate over the number from 0 to 1023 */
	for (j = 0; j < 1024; j++)
	{
		if (j % 3 == 0 || j % 5 == 0)
		{
			sum += j;
		}
	}
	printf("%d\n", sum);

	return (0);
}
