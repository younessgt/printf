#include "main.h"
/**
 * _printf_bin - function that print binary
 * @a: integer to pass
 * Return: number of elements in binary number
 */
int _printf_bin(unsigned int a)
{
	int doc[200];
	int i = 0;
	int j = 0;

	if (a > 0)
	{
		while (a > 0)
		{
			doc[i] = (a % 2) + '0';
			a /= 2;
			i++;
		}
		while (i-- > 0)
		{
			_putchar(doc[i]);
			j++;
		}
	}
	else if (a == 0)
	{
		_putchar('0');
		j++;
	}
	return (j);
}
