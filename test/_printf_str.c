#include "main.h"
/**
 * _printf_str - function that print a string
 * @b: pointer to character
 * Return: nothing
 */
void _printf_str(char *b)
{
	int i;

	if (b != NULL)
	{
		for (i = 0; b[i] != '\0'; i++)
			_putchar(b[i]);
	}
}
