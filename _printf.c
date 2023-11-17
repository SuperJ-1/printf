#include "main.h"
/**
 * _printf - code starts here
 * Desc: This function will select the correct function to print
 * @format: An identifier
 * Return: returns the string length
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
	{"%s", printf_string}, {"%c", printf_char},
	{"%%", printf_37},
	{"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_srev},
	{"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_unsigned},
	{"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
		{"%S", printf_exclusive_string}, {"%p", printf_pointer}
	};

	va_list args;
	int i = 0, w, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		w = 13;
			while (w >= 0)
		{
			if (m[w].id[0] == format[i] && m[w].id[1] == format[i + 1])
			{
				length += m[w].f(args);
				i = i + 2;
				goto Here;
			}
			w--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
