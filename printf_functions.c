#include "main.h"

/**
 * func_d - add a value to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_d(char *buff, int count, va_list value)
{
	int base = 10;
	char *str = _itoa(va_arg(value, int), base);

	return (_assign(buff, count, str));
}

/**
 * func_i - add a integer to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_i(char *buff, int count, va_list value)
{
	int base = 10;
	char *str = _itoa(va_arg(value, int), base);

	return (_assign(buff, count, str));
}

/**
 * func_u - add a unsigned ineteger to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_u(char *buff, int count, va_list value)
{
	int base = 10;
	char *str = _itoa(va_arg(value, int), base);

	return (_assign(buff, count, str));
}

/**
 * func_x - add a unsigned hexadecimal to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_x(char *buff, int count, va_list value)
{
	int base = 10;
	int integer = va_arg(value, int);
	unsigned int u_integer = 0;
	char *hex;

	if (integer < 0)
		u_integer = _abs(integer);

	hex = _uitoa(u_integer, base);

	return (_assign(buff, count, hex));

}

/**
 * func_c - add a character to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_c(char *buff, int count, va_list value)
{
	int ch = va_arg(value, int);

	if (!ch)
	{
		write(1, "\0\0", 2);
		free(buff);
		exit(0);
	}
	buff[0] = ch;
	return (count + 1);
}

/**
 * func_s - add a string to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_s(char *buff, int count, va_list value)
{
	char *str = va_arg(value, char *);

	if (!str)
		str = "(null)";
	return (_assign(buff, count, str));
}

/**
 * func_ptg - add a '%' to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_ptg(char *buff, int count, va_list value)
{
	(void)value;
	buff[0] = '%';
	return (count + 1);
}

