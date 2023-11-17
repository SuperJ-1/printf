#include "main.h"

/**
 * _putchar - entry point 
 * Desc: To print a single character to output
 * @c: This is the character to be printed
 * Return: return an integer
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
