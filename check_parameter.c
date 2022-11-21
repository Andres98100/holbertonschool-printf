#include "main.h"

int (*check_prtr(char format))(char *, int, va_list)
{
	int j = 0;

	ptr_ch arg_ptr[] = {
		{"c", func_c},
		{"s", func_s},
		{"%", func_ptg},
		{NULL, NULL}
	};

	/*
	ptr_ch arg_ptr[] = {
		{"d", func_d},
		{"i", func_i},
		{"u", func_u},
		{"o", func_o},
		{"x", func_x},
		{"X", func_X},
		{"c", func_c},
		{"s", func_s},
		{"p", func_p},
		{"%", func_ptg},
		{"r", func_r},
		{NULL, NULL}
	};
	*/
	
	while (arg_ptr[j].c)
	{
		if (format == *arg_ptr[j].c)
			break;
		j++;
	}

	return (arg_ptr[j].f);
}
