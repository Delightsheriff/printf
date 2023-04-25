#include "main.h"

/**
  * print_integer - Prints an integer
  * @args: variadic arguments
  *
  * Return: integer
  */
int print_integer(va_list args)
{
	int count = 1, i = 0;
	unsigned int j = 0;

	j = va_arg(args, int);
	i = j;
	if (i < 0)
	{
		print('-');
		i = i * -1;
		j = i;
		count += 1;
	}
	while (j > 9)
	{
		j = j / 10;
		count++;
	}

	print_integer_recursive(i);
	return (count);
}


/**
  * print_integer_recursive - Prints a integer
  * @num: integer to print
  *
  * Return: Nothing
  */
void print_integer_recursive(int num)
{
	unsigned int temp;

	temp = num;
	if (temp / 10)
		print_integer_recursive(temp / 10);
	print(temp % 10 + '0');
}
