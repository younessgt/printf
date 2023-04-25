#include "main.h"
/**
 * _printf_bin - function that print binary
 * @a: character to pass
 * Return: 1 (success) one character is printed
 */
int _printf_bin(unsigned int a)
{
	int doc[200];
	int i = 0;
	int j = 0;

	if (a > 0 && a <= 4294967295)
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
	else if (a < 0)
	{
		return (-1);
	}
	return (j);
}
