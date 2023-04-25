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
#endif
