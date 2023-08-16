#include "main.h"

void times_table(void)
{
	int i, j, result;

	for (i = 10 ; i > 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			result = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result >= 10)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			_putchar('\n');
		}
	}
	times_table ();
	return (1);
}
