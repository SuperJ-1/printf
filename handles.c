#include "main.h"
/**
* prnt_c - handles character output to print with function printf
* @c: character to print
* Return: void
*/
int prnt_c(char c)
{
return (_putchar(c));
}
/**
* prnt_s - handles string output to print with function  printf
* @str: pointer to a string
* Return: string passed in function
*/
int prnt_s(const char *str)
{
int count = 0;

while (*str != '\0')
{
_putchar(*str);
count++;
str++;
}
return (count);
}
/**
* prnt_i - handles integers to print with function
* @num: passed integer
* Return: integer from function
*/
int prnt_i(int num)
{
int count = 0;

if (num < 0)
{
_putchar('-');
count++;
num = -num;
}
count += print_unsigned_integer(num);
return (count);
}

/**
* print_unsigned_integer - prints an unsigned integer
* unto stdout with function printf
* @num: integer to print out
* Return: number passed in function
*/
int print_unsigned_integer(unsigned int num)
{
int count = 0;

if (num / 10)
count += print_unsigned_integer(num / 10);
_putchar(num % 10 + '0');
return (count + 1);
}

