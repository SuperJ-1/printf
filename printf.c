:#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - A simplified version of the printf function
 * @format: The format string to print
 *
 * writes the  format to the standard output (stdout).
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
			{
				char *s = va_arg(args, char *);

				while (*s)
				{
					write(1, s++, 1);
					count++;
				}
			}
			else if (*format == 'c')
			{
				char c = (char)va_arg(args, int);

				write(1, &c, 1);
				count++;
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
