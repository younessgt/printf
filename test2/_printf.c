#include "main.h"
/**
 * _printf - function that print according to a format
 * @format: pointer to character
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format != NULL && format[j] != '\0')
	{
		if (format[j] == '%')
		{
			format++;
			if (format[j] == 'c')
				i += _printf_char(args);
			else if (format[j] == 's')
				i += _printf_str(args);
			else if (format[j] == '%')
			{
				_putchar('%');
				i++;
			}
			else
			{
				_putchar(format[j]);
				i++;
			}
		}
		else
		{
			_putchar(format[j]);
			i++;
		}
		format++;
	}
	va_end(args);
	return (i);
}