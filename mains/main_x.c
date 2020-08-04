#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "printf.h"
#include "libftprintf.h"

int		ft_printf(const char *s, ...);

void error(int c1, int c2)
{
	if (c1 != c2)
		printf("__________________!!!!!!!!!!!!!!ERROR!!!!!!!!!!!!!!!!____________________\nprintf_%d | ft_printf_%d\n\n\n\n", c1, c2);
}

int main()
{
	int c1;
	int c2;

	printf("\n\n\n__________________________________________________________________________________\n");
	printf("\nTEST_HEX\n\n");
	printf("\n\n\n\n______________________TEST_HEX___________________________________\n\n\n");



	printf("Test min max\n");
	c1 = printf("|%%x|%%15x|%%-15x|%%015x|                |%x|%15x|%-15x|%015x|\n", 2147483647, 2147483647, 2147483647, 2147483647);
	c2 = ft_printf("|%%x|%%15x|%%-15x|%%015x|                |%x|%15x|%-15x|%015x|\n", 2147483647, 2147483647, 2147483647, 2147483647);
	error(c1, c2);
	c1 = printf("|%%x|%%15x|%%-15x|%%015x|                |%x|%15x|%-15x|%015x|\n", -2147483648, -2147483648, -2147483648, -2147483648);
	c2 = ft_printf("|%%x|%%15x|%%-15x|%%015x|                |%x|%15x|%-15x|%015x|\n", -2147483648, -2147483648, -2147483648, -2147483648);
	error(c1, c2);
	printf("\n");

	printf("Test larger min max\n");

	c1 = printf("|%%x|%%15x|%%-15x|%%015x|                |%x|%15x|%-15x|%015x|\n", 2147483648, 2147483648, 2147483648, 2147483648);
	c2 = ft_printf("|%%x|%%15x|%%-15x|%%015x|                |%x|%15x|%-15x|%015x|\n", 2147483648, 2147483648, 2147483648, 2147483648);
	error(c1, c2);
	c1 = printf("|%%x|%%15x|%%-15x|%%015x|                |%x|%15x|%-15x|%015x|\n", -2147483649, -2147483649, -2147483649, -2147483649);
	c2 = ft_printf("|%%x|%%15x|%%-15x|%%015x|                |%x|%15x|%-15x|%015x|\n", -2147483649, -2147483649, -2147483649, -2147483649);
	error(c1, c2);
	c1 = printf("|%%x|%%15x|%%-15x|%%015x|                |%x|%15x|%-15x|%015x|\n", 2147483650, 2147483650, 2147483650, 2147483650);
	c2 = ft_printf("|%%x|%%15x|%%-15x|%%015x|                |%x|%15x|%-15x|%015x|\n", 2147483650, 2147483650, 2147483650, 2147483650);
	error(c1, c2);
	c1 = printf("|%%x|%%15x|%%-15x|%%015x|                |%x|%15x|%-15x|%015x|\n", -2147483650, -2147483650, -2147483650, -2147483650);
	c2 = ft_printf("|%%x|%%15x|%%-15x|%%015x|                |%x|%15x|%-15x|%015x|\n", -2147483650, -2147483650, -2147483650, -2147483650);
	error(c1, c2);
	c1 = printf("|%%x|%%15x|%%-15x|%%015x|                |%x|%15x|%-15x|%015x|\n", 140737488355327, 140737488355327, 140737488355327, 140737488355327);
	c2 = ft_printf("|%%x|%%15x|%%-15x|%%015x|                |%x|%15x|%-15x|%015x|\n", 140737488355327, 140737488355327, 140737488355327, 140737488355327);
	error(c1, c2);
	printf("\n");

	printf("\nNormal tests\n");
	c1 = printf("%%x_%%0x_%%3x_%%5x_%%10x|                    |%x|%0x|%3x|%5x|%10x|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%x_%%0x_%%3x_%%5x_%%10x|                   *|%x|%0x|%3x|%5x|%10x|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%x_%%0x_%%3x_%%5x_%%10x|                    |%x|%0x|%3x|%5x|%10x|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%x_%%0x_%%3x_%%5x_%%10x|                   *|%x|%0x|%3x|%5x|%10x|\n", 234, 234, 234, 234, 234);
	error(c1, c2);
	c1 = printf("%%x_%%0x_%%3x_%%5x_%%10x|                    |%x|%0x|%3x|%5x|%10x|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%x_%%0x_%%3x_%%5x_%%10x|                   *|%x|%0x|%3x|%5x|%10x|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");

	c1 = printf("%%-x_%%-0x_%%-3x_%%-5x_%%-10x|               |%-x|%-0x|%-3x|%-5x|%-10x|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%-x_%%-0x_%%-3x_%%-5x_%%-10x|              *|%-x|%-0x|%-3x|%-5x|%-10x|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%-x_%%-0x_%%-3x_%%-5x_%%-10x|               |%-x|%-0x|%-3x|%-5x|%-10x|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%-x_%%-0x_%%-3x_%%-5x_%%-10x|              *|%-x|%-0x|%-3x|%-5x|%-10x|\n", 234, 234, 234, 234, 234);
	error(c1, c2);
	c1 = printf("%%-x_%%-0x_%%-3x_%%-5x_%%-10x|               |%-x|%-0x|%-3x|%-5x|%-10x|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%-x_%%-0x_%%-3x_%%-5x_%%-10x|              *|%-x|%-0x|%-3x|%-5x|%-10x|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");

	c1 = printf("%%02x_%%03x_%%05x_%%07x_%%010x|              |%02x|%03x|%05x|%07x|%010x|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%02x_%%03x_%%05x_%%07x_%%010x|             *|%02x|%03x|%05x|%07x|%010x|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%02x_%%03x_%%05x_%%07x_%%010x|              |%02x|%03x|%05x|%07x|%010x|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%02x_%%03x_%%05x_%%07x_%%010x|             *|%02x|%03x|%05x|%07x|%010x|\n", 234, 234, 234, 234, 234);
	error(c1, c2);
	c1 = printf("%%02x_%%03x_%%05x_%%07x_%%010x|              |%02x|%03x|%05x|%07x|%010x|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%02x_%%03x_%%05x_%%07x_%%010x|             *|%02x|%03x|%05x|%07x|%010x|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");

	c1 = printf("%%.0x_%%0.0x_%%3.0x_%%5.0x_%%10.0x|          |%.0x|%0.0x|%3.0x|%5.0x|%10.0x|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%.0x_%%0.0x_%%3.0x_%%5.0x_%%10.0x|         *|%.0x|%0.0x|%3.0x|%5.0x|%10.0x|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%.0x_%%0.0x_%%3.0x_%%5.0x_%%10.0x|          |%.0x|%0.0x|%3.0x|%5.0x|%10.0x|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%.0x_%%0.0x_%%3.0x_%%5.0x_%%10.0x|         *|%.0x|%0.0x|%3.0x|%5.0x|%10.0x|\n", 234, 234, 234, 234, 234);
	error(c1, c2);
	c1 = printf("%%x.0_%%0.0x_%%3.0x_%%5.0x_%%10.0x|          |%.0x|%0.0x|%3.0x|%5.0x|%10.0x|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%x.0_%%0.0x_%%3.0x_%%5.0x_%%10.0x|         *|%.0x|%0.0x|%3.0x|%5.0x|%10.0x|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");

	c1 = printf("%%-.0x_%%-0.0x_%%-3.0x_%%-5.0x_%%-10.0x|     |%-.0x|%-0.0x|%-3.0x|%-5.0x|%-10.0x|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%-.0x_%%-0.0x_%%-3.0x_%%-5.0x_%%-10.0x|    *|%-.0x|%-0.0x|%-3.0x|%-5.0x|%-10.0x|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%-.0x_%%-0.0x_%%-3.0x_%%-5.0x_%%-10.0x|     |%-.0x|%-0.0x|%-3.0x|%-5.0x|%-10.0x|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%-.0x_%%-0.0x_%%-3.0x_%%-5.0x_%%-10.0x|    *|%-.0x|%-0.0x|%-3.0x|%-5.0x|%-10.0x|\n", 234, 234, 234, 234, 234);
	error(c1, c2);
	c1 = printf("%%-.0x_%%-0.0x_%%-3.0x_%%-5.0x_%%-10.0x|     |%-.0x|%-0.0x|%-3.0x|%-5.0x|%-10.0x|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%-.0x_%%-0.0x_%%-3.0x_%%-5.0x_%%-10.0x|    *|%-.0x|%-0.0x|%-3.0x|%-5.0x|%-10.0x|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");

	c1 = printf("%%02.0x_%%03.0x_%%05.0x_%%07.0x_%%010.0x|    |%02.0x|%03.0x|%05.0x|%07.0x|%010.0x|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%02.0x_%%03.0x_%%05.0x_%%07.0x_%%010.0x|   *|%02.0x|%03.0x|%05.0x|%07.0x|%010.0x|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%02.0x_%%03.0x_%%05.0x_%%07.0x_%%010.0x|    |%02.0x|%03.0x|%05.0x|%07.0x|%010.0x|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%02.0x_%%03.0x_%%05.0x_%%07.0x_%%010.0x|   *|%02.0x|%03.0x|%05.0x|%07.0x|%010.0x|\n", 234, 234, 234, 234, 234);
	error(c1, c2);
	c1 = printf("%%02.0x_%%03.0x_%%05.0x_%%07.0x_%%010.0x|    |%02.0x|%03.0x|%05.0x|%07.0x|%010.0x|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%02.0x_%%03.0x_%%05.0x_%%07.0x_%%010.0x|   *|%02.0x|%03.0x|%05.0x|%07.0x|%010.0x|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");

	c1 = printf("%%.3x_%%0.3x_%%3.3x_%%5.3x_%%10.3x|          |%.3x|%0.3x|%3.3x|%5.3x|%10.3x|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%.3x_%%0.3x_%%3.3x_%%5.3x_%%10.3x|         *|%.3x|%0.3x|%3.3x|%5.3x|%10.3x|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%.3x_%%0.3x_%%3.3x_%%5.3x_%%10.3x|          |%.3x|%0.3x|%3.3x|%5.3x|%10.3x|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%.3x_%%0.3x_%%3.3x_%%5.3x_%%10.3x|         *|%.3x|%0.3x|%3.3x|%5.3x|%10.3x|\n", 234, 234, 234, 234, 234);
	error(c1, c2);
	c1 = printf("%%.3x_%%0.3x_%%3.3x_%%5.3x_%%10.4x|          |%.3x|%0.3x|%3.3x|%5.3x|%10.4x|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%.3x_%%0.3x_%%3.3x_%%5.3x_%%10.4x|         *|%.3x|%0.3x|%3.3x|%5.3x|%10.4x|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");

	c1 = printf("%%-.2x_%%-0.2x_%%-3.2x_%%-5.2x_%%-10.2x|     |%-.2x|%-0.2x|%-3.2x|%-5.2x|%-10.2x|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%-.2x_%%-0.2x_%%-3.2x_%%-5.2x_%%-10.2x|    *|%-.2x|%-0.2x|%-3.2x|%-5.2x|%-10.2x|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%-.2x_%%-0.2x_%%-3.2x_%%-5.2x_%%-10.2x|     |%-.2x|%-0.2x|%-3.2x|%-5.2x|%-10.2x|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%-.2x_%%-0.2x_%%-3.2x_%%-5.2x_%%-10.2x|    *|%-.2x|%-0.2x|%-3.2x|%-5.2x|%-10.2x|\n", 234, 234, 234, 234, 234);
	error(c1, c2);
	c1 = printf("%%-.2x_%%-0.2x_%%-3.2x_%%-5.2x_%%-10.2x|     |%-.2x|%-0.2x|%-3.2x|%-5.2x|%-10.2x|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%-.2x_%%-0.2x_%%-3.2x_%%-5.2x_%%-10.2x|    *|%-.2x|%-0.2x|%-3.2x|%-5.2x|%-10.2x|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");

	c1 = printf("%%02.2x_%%03.2x_%%05.2x_%%07.2x_%%010.2x|    |%02.2x|%03.2x|%05.2x|%07.2x|%010.2x|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%02.2x_%%03.2x_%%05.2x_%%07.2x_%%010.2x|   *|%02.2x|%03.2x|%05.2x|%07.2x|%010.2x|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%02.2x_%%03.2x_%%05.2x_%%07.2x_%%010.2x|    |%02.2x|%03.2x|%05.2x|%07.2x|%010.2x|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%02.2x_%%03.2x_%%05.2x_%%07.2x_%%010.2x|   *|%02.2x|%03.2x|%05.2x|%07.2x|%010.2x|\n", 234, 234, 234, 234, 234);
	error(c1, c2);
	c1 = printf("%%02.2x_%%03.2x_%%05.2x_%%07.2x_%%010.2x|    |%02.2x|%03.2x|%05.2x|%07.2x|%010.2x|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%02.2x_%%03.2x_%%05.2x_%%07.2x_%%010.2x|   *|%02.2x|%03.2x|%05.2x|%07.2x|%010.2x|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");

	c1 = printf("%%.5x_%%0.5x_%%3.5x_%%5.5x_%%10.5x|          |%.5x|%0.5x|%3.5x|%5.5x|%10.5x|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%.5x_%%0.5x_%%3.5x_%%5.5x_%%10.5x|         *|%.5x|%0.5x|%3.5x|%5.5x|%10.5x|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%.5x_%%0.5x_%%3.5x_%%5.5x_%%10.5x|          |%.5x|%0.5x|%3.5x|%5.5x|%10.5x|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%.5x_%%0.5x_%%3.5x_%%5.5x_%%10.5x|         *|%.5x|%0.5x|%3.5x|%5.5x|%10.5x|\n", 234, 234, 234, 234, 234);
	error(c1, c2);
	c1 = printf("%%.5x_%%0.5x_%%3.5x_%%5.5x_%%6.5x|           |%.5x|%0.5x|%3.5x|%5.5x|%6.5x|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%.5x_%%0.5x_%%3.5x_%%5.5x_%%6.5x|          *|%.5x|%0.5x|%3.5x|%5.5x|%6.5x|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");

	c1 = printf("%%-.5x_%%-0.5x_%%-3.5x_%%-5.5x_%%-10.5x|     |%-.5x|%-0.5x|%-3.5x|%-5.5x|%-10.5x|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%-.5x_%%-0.5x_%%-3.5x_%%-5.5x_%%-10.5x|    *|%-.5x|%-0.5x|%-3.5x|%-5.5x|%-10.5x|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%-.5x_%%-0.5x_%%-3.5x_%%-5.5x_%%-10.5x|     |%-.5x|%-0.5x|%-3.5x|%-5.5x|%-10.5x|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%-.5x_%%-0.5x_%%-3.5x_%%-5.5x_%%-10.5x|    *|%-.5x|%-0.5x|%-3.5x|%-5.5x|%-10.5x|\n", 234, 234, 234, 234, 234);
	error(c1, c2);
	c1 = printf("%%-.5x_%%-0.5x_%%-3.5x_%%-5.5x_%%-10.5x|     |%-.5x|%-0.5x|%-3.5x|%-5.5x|%-10.5x|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%-.5x_%%-0.5x_%%-3.5x_%%-5.5x_%%-10.5x|    *|%-.5x|%-0.5x|%-3.5x|%-5.5x|%-10.5x|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");

	c1 = printf("%%02.5x_%%03.5x_%%05.5x_%%07.5x_%%010.5x|    |%02.5x|%03.5x|%05.5x|%07.5x|%010.5x|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%02.5x_%%03.5x_%%05.5x_%%07.5x_%%010.5x|   *|%02.5x|%03.5x|%05.5x|%07.5x|%010.5x|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%02.5x_%%03.5x_%%05.5x_%%07.5x_%%010.5x|    |%02.5x|%03.5x|%05.5x|%07.5x|%010.5x|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%02.5x_%%03.5x_%%05.5x_%%07.5x_%%010.5x|   *|%02.5x|%03.5x|%05.5x|%07.5x|%010.5x|\n", 234, 234, 234, 234, 234);
	error(c1, c2);
	c1 = printf("%%02.5x_%%03.5x_%%05.5x_%%07.5x_%%010.5x|    |%02.5x|%03.5x|%05.5x|%07.5x|%010.5x|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%02.5x_%%03.5x_%%05.5x_%%07.5x_%%010.5x|   *|%02.5x|%03.5x|%05.5x|%07.5x|%010.5x|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");

	c1 = printf("%x|%x|%x\n", 2, 16, 30);
	c2 = ft_printf("%x|%x|%x\n", 2, 16, 30);
	error(c1, c2);

//	printf("\n\n-------------------------------\n|  Undefined behavior tests:  |\n-------------------------------\n\n");
//
//	c1 = printf("%%0-8.3x|%%0-8.5x|%%10|                         |%0-8.3x|%0-8.5x|%10|\n", -8473);
//	c2 = ft_printf("%%0-8.3x|%%0-8.5x|%%10|                        *|%0-8.3x|%0-8.5x|%10|\n", -8473);
//	error(c1, c2);
//	printf("\n");
//
//	c1 = printf("%%2-2.5x_%%2-3.5x_%%2-5.5x_%%2-7.5x_%%2-10.5x|    |%2-2.5x|%2-3.5x|%2-5.5x|%2-7.5x|%2-10.5x|\n", 0, 0, 0, 0, 0);
//	c2 = ft_printf("%%2-2.5x_%%2-3.5x_%%2-5.5x_%%2-7.5x_%%2-10.5x|   *|%2-2.5x|%2-3.5x|%2-5.5x|%2-7.5x|%2-10.5x|\n", 0, 0, 0, 0, 0);
//	error(c1, c2);
//	c1 = printf("%%2-2.5x_%%2-3.5x_%%2-5.5x_%%2-7.5x_%%2-10.5x|    |%2-2.5x|%2-3.5x|%2-5.5x|%2-7.5x|%2-10.5x|\n", 234, 234, 234, 234, 234);
//	c2 = ft_printf("%%2-2.5x_%%2-3.5x_%%2-5.5x_%%2-7.5x_%%2-10.5x|   *|%2-2.5x|%2-3.5x|%2-5.5x|%2-7.5x|%2-10.5x|\n", 234, 234, 234, 234, 234);
//	error(c1, c2);
//	c1 = printf("%%2-2.5x_%%2-3.5x_%%2-5.5x_%%2-7.5x_%%2-10.5x|    |%2-2.5x|%2-3.5x|%2-5.5x|%2-7.5x|%2-10.5x|\n", -234, -234, -234, -234, -234);
//	c2 = ft_printf("%%2-2.5x_%%2-3.5x_%%2-5.5x_%%2-7.5x_%%2-10.5x|   *|%2-2.5x|%2-3.5x|%2-5.5x|%2-7.5x|%2-10.5x|\n", -234, -234, -234, -234, -234);
//	error(c1, c2);
//	printf("\n");
//
//	c1 = printf("%%2.6-8x_%%3.6-8x_%%5.6-8x_%%7.6-8x_%%10x|              |%2.6-8x|%3.6-8x|%5.6-8x|%7.6-8x|%10.6-8x|\n", 0, 0, 0, 0, 0);
//	c2 = ft_printf("%%2.6-8x_%%3.6-8x_%%5.6-8x_%%7.6-8x_%%10.6-8x|             *|%2.6-8x|%3.6-8x|%5.6-8x|%7.6-8x|%10.6-8x|\n", 0, 0, 0, 0, 0);
//	error(c1, c2);
//	c1 = printf("%%2.6-8x_%%3.6-8x_%%5.6-8x_%%7.6-8x_%%10.6-8x|              |%2.6-8x|%3.6-8x|%5.6-8x|%7.6-8x|%10.6-8x|\n", 234, 234, 234, 234, 234);
//	c2 = ft_printf("%%2.6-8x_%%3.6-8x_%%5.6-8x_%%7.6-8x_%%10.6-8x|             *|%2.6-8x|%3.6-8x|%5.6-8x|%7.6-8x|%10.6-8x|\n", 234, 234, 234, 234, 234);
//	error(c1, c2);
//	c1 = printf("%%2.6-8x_%%3.6-8x_%%5.6-8x_%%7.6-8x_%%10.6-8x|              |%2.6-8x|%3.6-8x|%5.6-8x|%7.6-8x|%10.6-8x|\n", -234, -234, -234, -234, -234);
//	c2 = ft_printf("%%2.6-8x_%%3.6-8x_%%5.6-8x_%%7.6-8x_%%10.6-8x|             *|%2.6-8x|%3.6-8x|%5.6-8x|%7.6-8x|%10.6-8x|\n", -234, -234, -234, -234, -234);
//	error(c1, c2);
//	printf("\n");
}
