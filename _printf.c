#include "main.h"
/**
 * _printf - function that print according to a format
 * @format: pointer to character
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, g, h = 0, f = 0;
	char *ptr;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format != NULL && format[i] != '\0')
	{
		while (format[i] != '\0' && format[i] != '%')
		{
			_putchar(format[i]);
			g = i;
			i++;
		}
		if (format[i] == '\0')
			break;
		if (format[i] == '%')
		{
			h = h + 1;
			while (format[i + 1] != 'c' && format[i + 1] != 'd' && format[i + 1] != 'i'
					&& format[i + 1] != 's' && format[i + 1] != '\0' && format[i + 1] != '%')
			{
				while (format[i + 1] >= '0' && format[i + 1] <= '9')
				{
					i++;
				}
				_putchar(format[i + 1]);
				i++;
			}
			if (format[i + 1] == 'c')
			{
				_printf_char(va_arg(args, int));
				i++;
			}
			if (format[i] == '%' && format[i + 1] == 's')
			{
				ptr = va_arg(args, char*);
				_printf_str(ptr);
				i++;
			}
			if (format[i] == '%' && format[i + 1] == '%')
			{
				_putchar(format[i + 1]);
				i++;
				h++;
				f++;
			}
		}
		i++;
	}
	if (h == 0)
		g++;
	if (h != 0)
		g = i - h + f;
	va_end(args);
	return (g);
}
