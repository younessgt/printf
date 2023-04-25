#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
int _putchar(char c);
int _printf_char(va_list args);
int _printf_str(va_list args);
int _printf_num(int a);
int _printf(const char *format, ...);
int _printf_bin(unsigned int a);
int checker(va_list args, const char *format);
#endif
