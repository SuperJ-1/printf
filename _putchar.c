#include "main.h"

/**
 * _putchar - prints a single character unto the stdout
 * @c: character to print
 * Return: printed integer
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
