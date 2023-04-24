#include "main.h"

/**
 * _printf - custom implementation of printf function
 * @format: string with format to print
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;

	if (!format)
	{
		return (-1);
	}
	va_start(args, format);

	len = print_formatted(format, args);
	va_end(args);
	
	return (len);
}
