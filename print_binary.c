#include "main.h"

/**
 * print_binary - Prints an integer converted to binary
 * @args: A list of variadic arguments
 *
 * Return: Integer
 */
int print_binary(va_list args)
{
	unsigned int num = 0;
	int digits = 0, is_negative = 0;

	is_negative = va_arg(args, int);
	num = is_negative;

	if (is_negative < 0)
	{
		print('1');
		is_negative = is_negative * -1;
		num = is_negative;
		digits += 1;
	}

	while (num > 0)
	{
		num = num / 2;
		digits++;
	}
	print_binary_recursive(is_negative);

	return (digits);
}

/**
 * print_binary_recursive - Prints an integer in binary recursively
 * @num: The integer to print in binary
 *
 * Return: Nothing
 */
void print_binary_recursive(int num)
{
	unsigned int temp;

	temp = num;

	if (temp / 2)
	{
		print_binary_recursive(temp / 2);
	}
	print(temp % 2 + '0');
}
