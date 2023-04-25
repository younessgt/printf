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
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	while (format != NULL && format[j] != '\0')
	{
		if (format[j] == '%')
		{
			format++;
			i += checker(args, format);
		}
		else
		{
			_putchar(format[j]);
			i++;
		}
		if (format[j] != '\0')
			format++;
	}
	va_end(args);
	return (i);
}
