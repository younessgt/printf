#include "main.h"
/**
 * _printf_check - function that check the cases
 * @args:  pointer to the list of arguments
 * Return: number of string elements
 */
int checker(va_list args, char *format)
{
	int j = 0;
	int i = 0;

	if (format[j] == 'c')
	{
		i += _printf_char(args);
	}
	else if (format[j] == 's')
	{
		i += _printf_str(args);
	}
	else if (format[j] == '%')
	{
		_putchar('%');
		i++;
	}
	else if (format[j] == 'd' || format[j] == 'i')
	{
		i += _printf_num(va_arg(args, int));
	}
	else if (format[j] == '\0')
	{
		_putchar('%');
		i++;
	}
	else if (format[j] == 'b')
		i += _printf_bin(va_arg(args, unsigned int));
	else
	{
		_putchar('%');
		_putchar(format[j]);
		i += 2;
	}
	return (i);
}
