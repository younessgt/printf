#include "main.h"
/**
 * _printf_num - function that print all integers
 * @a: integer to print
 * Return: i (number of numbers)
 */
int _printf_num(int a) 
{
	int j = 0;

	if (a == 0)
	{
		putchar('0');
		j++;
	}
	if (a == INT_MIN)
	{
		putchar('-');
		putchar('2');
		a = 147483648;
		j += 2;
	}
	if (a < 0)
	{
		putchar('-');
		a = -a;
		j++;
	}
	char Arr[20];
	int i = 0;

	while (a > 0)
	{
		Arr[i++] = (a % 10) + '0';
		a /= 10;
	}
	while (i-- > 0)
	{
		putchar(Arr[i]);
		j++;
	}
	return (j);
}
