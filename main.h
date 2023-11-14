#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int _printf(const char *format, ...);
int prnt_s(const char *str);
int prnt_i(int num);
int prnt_c(char c);
int _putchar(char c);
int print_unsigned_integer(unsigned int num);
int print_char(va_list args);
int print_string(va_list args);
#endif
