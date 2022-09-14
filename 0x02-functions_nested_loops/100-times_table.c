#include "main.h"
/**
* print_times_table -  prints n times table
* starting with 0
* Description: prints n times table
* @n: is a variable
* Return: void
*/
void print_times_table(int n)
{
	int r, c, prod_ans;

	if (n >= 0 && n < 15)
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				prod_ans = r * c;

				if (c == 0)
					_putchar('0');
				else if (prod_ans < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod_ans % 10 + '0');
				}
				else if (prod_ans >= 10 && prod_ans < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((prod_ans / 10) % 10 + '0');
					_putchar(prod_ans % 10 + '0');
				}
				else if (prod_ans > 99 && prod_ans < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(prod_ans / 100 + '0');
					_putchar((prod_ans / 10) % 10 + '0');
					_putchar(prod_ans % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
