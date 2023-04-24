#include "main.h"
/**
 * _printf_char - function that print character
 * @args: character to pass
 * Return: 1 (success) one character is printed
 */
int _printf_char(va_list args)
{
	char a;

	a = va_arg(args, int);
	_putchar(a);
	return (1);
}
