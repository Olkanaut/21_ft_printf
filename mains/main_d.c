#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "printf.h"
#include "./includes/libftprintf.h"

int		ft_printf(const char *s, ...);

void error(int c1, int c2)
{
	if (c1 != c2)
		printf("__________________!!!!!!!!!!!!!!ERROR!!!!!!!!!!!!!!!!____________________\nprintf_%d | ft_printf_%d\n\n", c1, c2);
}

int main()
{
	int c1;
	int c2;

	printf("\n\n\n__________________________________________________________________________________\n");

	printf("\nTEST_SIGNED_NUMBERS\n\n");

	printf("Test min max\n");
	c1 = printf("|%%d|%%15d|%%-15d|%%015d|                |%d|%15d|%-15d|%015d|\n", 2147483647, 2147483647, 2147483647, 2147483647);
	c2 = ft_printf("|%%d|%%15d|%%-15d|%%015d|                |%d|%15d|%-15d|%015d|\n", 2147483647, 2147483647, 2147483647, 2147483647);
	error(c1, c2);

	c1 = printf("%15d|\n", -2147483648);
	c2 = ft_printf("%15d|\n", -2147483648);
	error(c1, c2);

	c1 = printf("|%%d|%%15d|%%-15d|%%015d|                |%d|%15d|%-15d|%015d|\n", -2147483648, -2147483648, -2147483648, -2147483648);
	c2 = ft_printf("|%%d|%%15d|%%-15d|%%015d|                |%d|%15d|%-15d|%015d|\n", -2147483648, -2147483648, -2147483648, -2147483648);
	error(c1, c2);
	printf("\n");

	printf("Test larger min max\n");
	c1 = printf("|%%d|%%15d|%%-15d|%%015d|                |%d|%15d|%-15d|%015d|\n", 2147483648, 2147483648, 2147483648, 2147483648);
	c2 = ft_printf("|%%d|%%15d|%%-15d|%%015d|                |%d|%15d|%-15d|%015d|\n", 2147483648, 2147483648, 2147483648, 2147483648);
	error(c1, c2);
	c1 = printf("|%%d|%%15d|%%-15d|%%015d|                |%d|%15d|%-15d|%015d|\n", -2147483649, -2147483649, -2147483649, -2147483649);
	c2 = ft_printf("|%%d|%%15d|%%-15d|%%015d|                |%d|%15d|%-15d|%015d|\n", -2147483649, -2147483649, -2147483649, -2147483649);
	error(c1, c2);
	c1 = printf("|%%d|%%15d|%%-15d|%%015d|                |%d|%15d|%-15d|%015d|\n", 2147483650, 2147483650, 2147483650, 2147483650);
	c2 = ft_printf("|%%d|%%15d|%%-15d|%%015d|                |%d|%15d|%-15d|%015d|\n", 2147483650, 2147483650, 2147483650, 2147483650);
	error(c1, c2);
	c1 = printf("|%%d|%%15d|%%-15d|%%015d|                |%d|%15d|%-15d|%015d|\n", -2147483650, -2147483650, -2147483650, -2147483650);
	c2 = ft_printf("|%%d|%%15d|%%-15d|%%015d|                |%d|%15d|%-15d|%015d|\n", -2147483650, -2147483650, -2147483650, -2147483650);
	error(c1, c2);
	printf("\n");


	c1 = printf(">{%*d}\n", -5, 42);
	c2 = ft_printf("*{%*d}\n", -5, 42);
	error(c1, c2);

	printf("Normal tests\n");
	c1 = printf("{%%*d}|* = -5|                              |{%*d}\n", -5, 42);
	c2 = ft_printf("{%%*d}|* = -5|                             *|{%*d}\n", -5, 42);
	error(c1, c2);
	c1 = printf("%%05.*d|* = -15|                            |{%05.*d}\n", -15, 42);
	c2 = ft_printf("%%05.*d|* = -15|                           *|{%05.*d}\n", -15, 42);
	error(c1, c2);

	c1 = printf("%%d_%%0d_%%3d_%%5d_%%10d|                       |%d|%0d|%3d|%5d|%10d|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%d_%%0d_%%3d_%%5d_%%10d|                      *|%d|%0d|%3d|%5d|%10d|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%d_%%0d_%%3d_%%5d_%%10d|                       |%d|%0d|%3d|%5d|%10d|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%d_%%0d_%%3d_%%5d_%%10d|                      *|%d|%0d|%3d|%5d|%10d|\n", 234, 234, 234, 234, 234);
	error(c1, c2);
	c1 = printf("%%d_%%0d_%%3d_%%5d_%%10d|                       |%d|%0d|%3d|%5d|%10d|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%d_%%0d_%%3d_%%5d_%%10d|                      *|%d|%0d|%3d|%5d|%10d|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");

	c1 = printf("%%-d_%%-0d_%%-3d_%%-5d_%%-10d|                  |%-d|%-0d|%-3d|%-5d|%-10d|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%-d_%%-0d_%%-3d_%%-5d_%%-10d|                 *|%-d|%-0d|%-3d|%-5d|%-10d|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%-d_%%-0d_%%-3d_%%-5d_%%-10d|                  |%-d|%-0d|%-3d|%-5d|%-10d|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%-d_%%-0d_%%-3d_%%-5d_%%-10d|                 *|%-d|%-0d|%-3d|%-5d|%-10d|\n", 234, 234, 234, 234, 234);
	error(c1, c2);
	c1 = printf("%%-d_%%-0d_%%-3d_%%-5d_%%-10d|                  |%-d|%-0d|%-3d|%-5d|%-10d|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%-d_%%-0d_%%-3d_%%-5d_%%-10d|                 *|%-d|%-0d|%-3d|%-5d|%-10d|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");


	c1 = printf("%%02d_%%03d_%%05d_%%07d_%%010d|                 |%02d|%03d|%05d|%07d|%010d|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%02d_%%03d_%%05d_%%07d_%%010d|                *|%02d|%03d|%05d|%07d|%010d|\n", 0, 0, 0, 0, 0);
	error(c1, c2);


	c1 = printf("%%02d_%%03d_%%05d_%%07d_%%010d|                 |%02d|%03d|%05d|%07d|%010d|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%02d_%%03d_%%05d_%%07d_%%010d|                *|%02d|%03d|%05d|%07d|%010d|\n", 234, 234, 234, 234, 234);
	error(c1, c2);
	c1 = printf("%%02d_%%03d_%%05d_%%07d_%%010d|                 |%02d|%03d|%05d|%07d|%010d|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%02d_%%03d_%%05d_%%07d_%%010d|                *|%02d|%03d|%05d|%07d|%010d|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");

	c1 = printf("%%.0d_%%0.0d_%%3.0d_%%5.0d_%%10.0d|             |%.0d|%0.0d|%3.0d|%5.0d|%10.0d|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%.0d_%%0.0d_%%3.0d_%%5.0d_%%10.0d|            *|%.0d|%0.0d|%3.0d|%5.0d|%10.0d|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%.0d_%%0.0d_%%3.0d_%%5.0d_%%10.0d|             |%.0d|%0.0d|%3.0d|%5.0d|%10.0d|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%.0d_%%0.0d_%%3.0d_%%5.0d_%%10.0d|            *|%.0d|%0.0d|%3.0d|%5.0d|%10.0d|\n", 234, 234, 234, 234, 234);
	error(c1, c2);
	c1 = printf("%%d.0_%%0.0d_%%3.0d_%%5.0d_%%10.0d|             |%.0d|%0.0d|%3.0d|%5.0d|%10.0d|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%d.0_%%0.0d_%%3.0d_%%5.0d_%%10.0d|            *|%.0d|%0.0d|%3.0d|%5.0d|%10.0d|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");


	c1 = printf("%%-.0d_%%-0.0d_%%-3.0d_%%-5.0d_%%-10.0d|        |%-.0d|%-0.0d|%-3.0d|%-5.0d|%-10.0d|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%-.0d_%%-0.0d_%%-3.0d_%%-5.0d_%%-10.0d|       *|%-.0d|%-0.0d|%-3.0d|%-5.0d|%-10.0d|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%-.0d_%%-0.0d_%%-3.0d_%%-5.0d_%%-10.0d|        |%-.0d|%-0.0d|%-3.0d|%-5.0d|%-10.0d|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%-.0d_%%-0.0d_%%-3.0d_%%-5.0d_%%-10.0d|       *|%-.0d|%-0.0d|%-3.0d|%-5.0d|%-10.0d|\n", 234, 234, 234, 234, 234);
	error(c1, c2);
	c1 = printf("%%-.0d_%%-0.0d_%%-3.0d_%%-5.0d_%%-10.0d|        |%-.0d|%-0.0d|%-3.0d|%-5.0d|%-10.0d|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%-.0d_%%-0.0d_%%-3.0d_%%-5.0d_%%-10.0d|       *|%-.0d|%-0.0d|%-3.0d|%-5.0d|%-10.0d|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	c1 = printf("%%.0d_%%0-.0d_%%03-.0d_%%0-5.0d_%%10-.0d|        |%-.0d|%-0.0d|%-3.0d|%-5.0d|%-10.0d|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%.0d_%%0-.0d_%%03-.0d_%%0-5.0d_%%10-.0d|       *|%-.0d|%-0.0d|%-3.0d|%-5.0d|%-10.0d|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");

	c1 = printf("%%02.0d_%%03.0d_%%05.0d_%%07.0d_%%010.0d|       |%02.0d|%03.0d|%05.0d|%07.0d|%010.0d|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%02.0d_%%03.0d_%%05.0d_%%07.0d_%%010.0d|      *|%02.0d|%03.0d|%05.0d|%07.0d|%010.0d|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%02.0d_%%03.0d_%%05.0d_%%07.0d_%%010.0d|       |%02.0d|%03.0d|%05.0d|%07.0d|%010.0d|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%02.0d_%%03.0d_%%05.0d_%%07.0d_%%010.0d|      *|%02.0d|%03.0d|%05.0d|%07.0d|%010.0d|\n", 234, 234, 234, 234, 234);
	error(c1, c2);
	c1 = printf("%%02.0d_%%03.0d_%%05.0d_%%07.0d_%%010.0d|       |%02.0d|%03.0d|%05.0d|%07.0d|%010.0d|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%02.0d_%%03.0d_%%05.0d_%%07.0d_%%010.0d|      *|%02.0d|%03.0d|%05.0d|%07.0d|%010.0d|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");

	c1 = printf("%%.3d_%%0.3d_%%3.3d_%%5.3d_%%10.3d|             |%.3d|%0.3d|%3.3d|%5.3d|%10.3d|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%.3d_%%0.3d_%%3.3d_%%5.3d_%%10.3d|            *|%.3d|%0.3d|%3.3d|%5.3d|%10.3d|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%.3d_%%0.3d_%%3.3d_%%5.3d_%%10.3d|             |%.3d|%0.3d|%3.3d|%5.3d|%10.3d|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%.3d_%%0.3d_%%3.3d_%%5.3d_%%10.3d|            *|%.3d|%0.3d|%3.3d|%5.3d|%10.3d|\n", 234, 234, 234, 234, 234);
	error(c1, c2);

	c1 = printf(">|%10.4d|\n", -234);
	c2 = ft_printf("*|%10.4d|\n", -234);


	c1 = printf("%%.3d_%%0.3d_%%3.3d_%%5.3d_%%10.4d|             |%.3d|%0.3d|%3.3d|%5.3d|%10.4d|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%.3d_%%0.3d_%%3.3d_%%5.3d_%%10.4d|            *|%.3d|%0.3d|%3.3d|%5.3d|%10.4d|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");

////////////////////////////////////////



	c1 = printf("%%-.2d_%%-0.2d_%%-3.2d_%%-5.2d_%%-10.2d|        |%-.2d|%-0.2d|%-3.2d|%-5.2d|%-10.2d|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%-.2d_%%-0.2d_%%-3.2d_%%-5.2d_%%-10.2d|       *|%-.2d|%-0.2d|%-3.2d|%-5.2d|%-10.2d|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%-.2d_%%-0.2d_%%-3.2d_%%-5.2d_%%-10.2d|        |%-.2d|%-0.2d|%-3.2d|%-5.2d|%-10.2d|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%-.2d_%%-0.2d_%%-3.2d_%%-5.2d_%%-10.2d|       *|%-.2d|%-0.2d|%-3.2d|%-5.2d|%-10.2d|\n", 234, 234, 234, 234, 234);
	error(c1, c2);


	c1 = printf("%%-.2d_%%-0.2d_%%-3.2d_%%-5.2d_%%-10.2d|        |%-.2d|%-0.2d|%-3.2d|%-5.2d|%-10.2d|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%-.2d_%%-0.2d_%%-3.2d_%%-5.2d_%%-10.2d|       *|%-.2d|%-0.2d|%-3.2d|%-5.2d|%-10.2d|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");



	c1 = printf("%%02.2d_%%03.2d_%%05.2d_%%07.2d_%%010.2d|       |%02.2d|%03.2d|%05.2d|%07.2d|%010.2d|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%02.2d_%%03.2d_%%05.2d_%%07.2d_%%010.2d|      *|%02.2d|%03.2d|%05.2d|%07.2d|%010.2d|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%02.2d_%%03.2d_%%05.2d_%%07.2d_%%010.2d|       |%02.2d|%03.2d|%05.2d|%07.2d|%010.2d|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%02.2d_%%03.2d_%%05.2d_%%07.2d_%%010.2d|      *|%02.2d|%03.2d|%05.2d|%07.2d|%010.2d|\n", 234, 234, 234, 234, 234);
	error(c1, c2);



	c1 = printf("%%02.2d_%%03.2d_%%05.2d_%%07.2d_%%010.2d|       |%02.2d|%03.2d|%05.2d|%07.2d|%010.2d|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%02.2d_%%03.2d_%%05.2d_%%07.2d_%%010.2d|      *|%02.2d|%03.2d|%05.2d|%07.2d|%010.2d|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");



	c1 = printf("%%.5d_%%0.5d_%%3.5d_%%5.5d_%%10.5d|             |%.5d|%0.5d|%3.5d|%5.5d|%10.5d|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%.5d_%%0.5d_%%3.5d_%%5.5d_%%10.5d|            *|%.5d|%0.5d|%3.5d|%5.5d|%10.5d|\n", 0, 0, 0, 0, 0);
	error(c1, c2);








///////////

	c1 = printf("%%.5d_%%0.5d_%%3.5d_%%5.5d_%%10.5d|             |%.5d|%0.5d|%3.5d|%5.5d|%10.5d|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%.5d_%%0.5d_%%3.5d_%%5.5d_%%10.5d|            *|%.5d|%0.5d|%3.5d|%5.5d|%10.5d|\n", 234, 234, 234, 234, 234);
	error(c1, c2);

	c1 = printf("%%.5d_%%0.5d_%%3.5d_%%5.5d_%%6.5d|              |%.5d|%0.5d|%3.5d|%5.5d|%6.5d|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%.5d_%%0.5d_%%3.5d_%%5.5d_%%6.5d|             *|%.5d|%0.5d|%3.5d|%5.5d|%6.5d|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");




	c1 = printf("%%-.5d_%%-0.5d_%%-3.5d_%%-5.5d_%%-10.5d|        |%-.5d|%-0.5d|%-3.5d|%-5.5d|%-10.5d|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%-.5d_%%-0.5d_%%-3.5d_%%-5.5d_%%-10.5d|       *|%-.5d|%-0.5d|%-3.5d|%-5.5d|%-10.5d|\n", 0, 0, 0, 0, 0);
	error(c1, c2);





	c1 = printf("%%-.5d_%%-0.5d_%%-3.5d_%%-5.5d_%%-10.5d|        |%-.5d|%-0.5d|%-3.5d|%-5.5d|%-10.5d|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%-.5d_%%-0.5d_%%-3.5d_%%-5.5d_%%-10.5d|       *|%-.5d|%-0.5d|%-3.5d|%-5.5d|%-10.5d|\n", 234, 234, 234, 234, 234);
	error(c1, c2);

	c1 = printf("%%-.5d_%%-0.5d_%%-3.5d_%%-5.5d_%%-10.5d|        |%-.5d|%-0.5d|%-3.5d|%-5.5d|%-10.5d|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%-.5d_%%-0.5d_%%-3.5d_%%-5.5d_%%-10.5d|       *|%-.5d|%-0.5d|%-3.5d|%-5.5d|%-10.5d|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");




	c1 = printf("%%02.5d_%%03.5d_%%05.5d_%%07.5d_%%010.5d|       |%02.5d|%03.5d|%05.5d|%07.5d|%010.5d|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%02.5d_%%03.5d_%%05.5d_%%07.5d_%%010.5d|      *|%02.5d|%03.5d|%05.5d|%07.5d|%010.5d|\n", 0, 0, 0, 0, 0);
	error(c1, c2);
	c1 = printf("%%02.5d_%%03.5d_%%05.5d_%%07.5d_%%010.5d|       |%02.5d|%03.5d|%05.5d|%07.5d|%010.5d|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%02.5d_%%03.5d_%%05.5d_%%07.5d_%%010.5d|      *|%02.5d|%03.5d|%05.5d|%07.5d|%010.5d|\n", 234, 234, 234, 234, 234);
	error(c1, c2);
	c1 = printf("%%02.5d_%%03.5d_%%05.5d_%%07.5d_%%010.5d|       |%02.5d|%03.5d|%05.5d|%07.5d|%010.5d|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%02.5d_%%03.5d_%%05.5d_%%07.5d_%%010.5d|      *|%02.5d|%03.5d|%05.5d|%07.5d|%010.5d|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");




	c1 = printf("%%0-2.5d_%%0-3.5d_%%0-5.5d_%%0-7.5d_%%0-10.5d|  |%0-2.5d|%0-3.5d|%0-5.5d|%0-7.5d|%0-10.5d|\n", 0, 0, 0, 0, 0);
	c2 = ft_printf("%%0-2.5d_%%0-3.5d_%%0-5.5d_%%0-7.5d_%%0-10.5d| *|%0-2.5d|%0-3.5d|%0-5.5d|%0-7.5d|%0-10.5d|\n", 0, 0, 0, 0, 0);
	error(c1, c2);

	c1 = printf("%%0-2.5d_%%0-3.5d_%%0-5.5d_%%0-7.5d_%%0-10.5d|  |%0-2.5d|%0-3.5d|%0-5.5d|%0-7.5d|%0-10.5d|\n", 234, 234, 234, 234, 234);
	c2 = ft_printf("%%0-2.5d_%%0-3.5d_%%0-5.5d_%%0-7.5d_%%0-10.5d| *|%0-2.5d|%0-3.5d|%0-5.5d|%0-7.5d|%0-10.5d|\n", 234, 234, 234, 234, 234);
	error(c1, c2);

	c1 = printf("%%0-2.5d_%%0-3.5d_%%0-5.5d_%%0-7.5d_%%0-10.5d|  |%0-2.5d|%0-3.5d|%0-5.5d|%0-7.5d|%0-10.5d|\n", -234, -234, -234, -234, -234);
	c2 = ft_printf("%%0-2.5d_%%0-3.5d_%%0-5.5d_%%0-7.5d_%%0-10.5d| *|%0-2.5d|%0-3.5d|%0-5.5d|%0-7.5d|%0-10.5d|\n", -234, -234, -234, -234, -234);
	error(c1, c2);
	printf("\n");

	// printf("\n\n-------------------------------\n|  Undefined behavior tests:  |\n-------------------------------\n\n");

	// c1 = printf("%%0-8.3d|%%0-8.5d|%%10|                         |%0-8.3d|%0-8.5d|%10|\n", -8473);
	// c2 = ft_printf("%%0-8.3d|%%0-8.5d|%%10|                        *|%0-8.3d|%0-8.5d|%10|\n", -8473);
	// error(c1, c2);
	// printf("\n");

	// c1 = printf("%%2-2.5d_%%2-3.5d_%%2-5.5d_%%2-7.5d_%%2-10.5d|    |%2-2.5d|%2-3.5d|%2-5.5d|%2-7.5d|%2-10.5d|\n", 0, 0, 0, 0, 0);
	// c2 = ft_printf("%%2-2.5d_%%2-3.5d_%%2-5.5d_%%2-7.5d_%%2-10.5d|   *|%2-2.5d|%2-3.5d|%2-5.5d|%2-7.5d|%2-10.5d|\n", 0, 0, 0, 0, 0);
	// error(c1, c2);
	// c1 = printf("%%2-2.5d_%%2-3.5d_%%2-5.5d_%%2-7.5d_%%2-10.5d|    |%2-2.5d|%2-3.5d|%2-5.5d|%2-7.5d|%2-10.5d|\n", 234, 234, 234, 234, 234);
	// c2 = ft_printf("%%2-2.5d_%%2-3.5d_%%2-5.5d_%%2-7.5d_%%2-10.5d|   *|%2-2.5d|%2-3.5d|%2-5.5d|%2-7.5d|%2-10.5d|\n", 234, 234, 234, 234, 234);
	// error(c1, c2);
	// c1 = printf("%%2-2.5d_%%2-3.5d_%%2-5.5d_%%2-7.5d_%%2-10.5d|    |%2-2.5d|%2-3.5d|%2-5.5d|%2-7.5d|%2-10.5d|\n", -234, -234, -234, -234, -234);
	// c2 = ft_printf("%%2-2.5d_%%2-3.5d_%%2-5.5d_%%2-7.5d_%%2-10.5d|   *|%2-2.5d|%2-3.5d|%2-5.5d|%2-7.5d|%2-10.5d|\n", -234, -234, -234, -234, -234);
	// error(c1, c2);



	printf("\n");
}
