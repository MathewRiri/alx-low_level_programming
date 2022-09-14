#include <stdio.h>

/**
* main - computes and prints the sum of all the multiples
*		of 3 or 5 below 1024 (excluded)
*
* Description: computes and prints the sum of all the multiples
*
* Return: 0.
*/


int main(void)
{
	int num;
	int tot;

	tot = 0;
	for (num = 0; num <= 1023; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			tot = (tot + num);
		}
	}

	printf("%d\n", tot);

	return (0);
}
