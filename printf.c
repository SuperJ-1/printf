#include "main.h"

/**
 * _printf - prints a stirng according to format and given specifier
 * @format: string
 * Return: string
 */
int _printf(const char *format, ...)
{
va_list arg_list;
int printed_chars = 0;

va_start(arg_list, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
prnt_c(va_arg(arg_list, int));
printed_chars++;
break;
case 's':
printed_chars += prnt_s(va_arg(arg_list, char*));
break;
case 'd':
case 'i':
printed_chars += prnt_i(va_arg(arg_list, int));
printed_chars++;
break;
default:
_putchar(*format);
printed_chars++;
break;
}
}
else
{
_putchar(*format);
printed_chars++;
}
format++;
}
va_end(arg_list);
return (printed_chars);
}
