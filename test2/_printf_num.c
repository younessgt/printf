#include "main.h"
/**
 * _printf_num - function that print all integers
 * @a: integer to print
 * Return: i (number of numbers)
 */
int _printf_num(int a)
{
	int j = 0, i = 0;
	char Arr[20];

	if (a == 0)
	{
		_putchar('0');
		j++;
	}
	if (a == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		a = 147483648;
		j += 2;
	}
	if (a < 0)
	{
		_putchar('-');
		a = -a;
		j++;
	}
	while (a > 0)
	{
		Arr[i++] = (a % 10) + '0';
		a /= 10;
	}
	while (i-- > 0)
	{
		_putchar(Arr[i]);
		j++;
	}
	return (j);
}
