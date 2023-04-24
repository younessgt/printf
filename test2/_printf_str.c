#include "main.h"
/**
 * _printf_str - function that print a string
 * @args: pointer to first argument
 * Return: number of characters of the string
 */
int _printf_str(va_list args)
{
	char *b;
	int i;

	b = va_arg(args, char*);
	if (b == NULL)
		b = "(null)";
	if (b != NULL)
	{
		for (i = 0; b[i] != '\0'; i++)
			_putchar(b[i]);
	}
	return (i);
}
