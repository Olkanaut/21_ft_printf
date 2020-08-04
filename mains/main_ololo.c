int		main(void)
{

	printf("\t%d\n", ft_printf("%0*d|\t", 13, 1234));
	printf("\t%d - real ptf\n\n", printf("%0*d|\t", 13, 1234));

	// ft_printf("\n----PERCENT-----\n");
	// p = printf("-050 |%-50%|\n", 45);
	// ftp = ft_printf("-50 |%-50%|\n", 45);
	// printf("                 %d\n",(int)(ftp - p));
	// p = printf("50 |%50%|\n", 45);
	// ftp = ft_printf("50 |%50%|\n", 45);
	// printf("                 %d\n",(int)(ftp - p));
	// p = printf("050.* |%050.*%|\n", 45);
	// ftp = ft_printf("050.* |%050.*%|\n", 45);
	// printf("                 %d\n",(int)(ftp - p));

	// ft_printf("\n----UNSIGNED INT-----\n");
	// p = printf("-050u |%-050u|\n", 45);
	// ftp = ft_printf("-050u |%-050u|\n", 45);
	// printf("                 %d\n",(int)(ftp - p));
	// p = printf("-050.u |%-050.u|\n", 45);
	// ftp = ft_printf("-050.u |%-050.u|\n", 45);
	// printf("                 %d\n",(int)(ftp - p));
	// p = printf("-050.15u |%-050.15u|\n", 45);
	// ftp = ft_printf("-050.15u |%-050.15u|\n", 45);
	// printf("                 %d\n",(int)(ftp - p));
	// p = printf("050u |%050u|\n", 45);
	// ftp = ft_printf("050u |%050u|\n", 45);
	// printf("                 %d\n",(int)(ftp - p));




// printf("%s", "########o#l#o#l#o##########		POINTERS	########o#l#o#l#o##########");
// printf("%s", "########o#l#o#l#o##########			PART 1");

// 	int	*tab = malloc(sizeof(int) * 10);
// 	int	*tab2 = malloc(0);

// 	int	*s = NULL;
// 	printf("\t%d\n", ft_printf("%3.4p|", 0));
// 	printf("\t%d\n\n", printf("%3.4p|", 0));

// 	printf("\t%d\n", ft_printf("%3.4p|", s));
// 	printf("\t%d\n\n", printf("%3.4p|", s));

// printf("\n\n***   07 >> %s:\n", "01 COMBO : width, precision, '-'");
// printf("%s\n", "1 : w < p < l");
// 	printf("\t%d\n", ft_printf("%3.4p|", tab)); //     w < p < l      >> tab	6
// 	printf("\t%d\n\n", printf("%3.4p|", tab));
// 	printf("\t%d\n", ft_printf("%-3.4p|", tab)); //                 >> tab	6
// 	printf("\t%d\n\n\n", printf("%-3.4p|", tab));

// 	printf("\t%d\n", ft_printf("%8.10p|", tab));
// 	printf("\t%d\n\n", printf("%8.10p|", tab));
// 	printf("\t%d\n", ft_printf("%-8.10p|", tab));
// 	printf("\t%d\n\n\n", printf("%-8.10p|", tab));
// 		printf("%s\n", "checking * :");
// 	printf("\t%d\n", ft_printf("%*.*p|", 8, 10, tab));
// 	printf("\t%d\n\n", printf("%*.*p|", 8, 10, tab));
// 	printf("\t%d\n", ft_printf("%-*.*p|", 8, 10, tab));
// 	printf("\t%d\n\n\n", printf("%-*.*p|", 8, 10, tab));

// printf("%s\n", "2 : p < w < l");
// 	printf("\t%d\n", ft_printf("%5.2p|", tab)); //     p < w < l      >> tab	6
// 	printf("\t%d\n\n", printf("%5.2p|", tab));
// 	printf("\t%d\n", ft_printf("%-5.2p|", tab)); //                 >> tab	6
// 	printf("\t%d\n\n\n", printf("%-5.2p|", tab));

// 	printf("\t%d\n", ft_printf("%25.2p|", tab));
// 	printf("\t%d\n\n", printf("%25.2p|", tab));
// 	printf("\t%d\n", ft_printf("%-25.2p|", tab));
// 	printf("\t%d\n\n\n", printf("%-25.2p|", tab));

// 	printf("\t%d\n", ft_printf("%*.*p|", 25, 2, tab));
// 	printf("\t%d\n\n", printf("%*.*p|", 25, 2, tab));
// 	printf("\t%d\n", ft_printf("%-*.*p|", 25, 2, tab));
// 	printf("\t%d\n\n\n", printf("%-*.*p|", 25, 2, tab));

// printf("%s\n", "3 : l < p < w");
// 	printf("\t%d\n", ft_printf("%29.15p|", tab)); //        l < p < w      >>     00tab		9
// 	printf("\t%d\n\n", printf("%29.15p|", tab));
// 	printf("\t%d\n", ft_printf("%-29.15p|", tab)); //                    >> 00tab    		9
// 	printf("\t%d\n\n\n", printf("%-29.15p|", tab));

// 	printf("\t%d\n", ft_printf("%-029.15p|", tab));
// 	printf("\t%d\n\n\n", printf("%-029.15p|", tab));

// 	printf("\t%d\n", ft_printf("%29.15p|", tab));
// 	printf("\t%d\n\n", printf("%29.15p|", tab));
// 	printf("\t%d\n", ft_printf("%-29.15p|", tab));
// 	printf("\t%d\n\n\n", printf("%-29.15p|", tab));

// 	printf("\t%d\n", ft_printf("%*.*p|", 29, 15, tab));
// 	printf("\t%d\n\n", printf("%*.*p|", 29, 15, tab));
// 	printf("\t%d\n", ft_printf("%-*.*p|", 29, 15, tab));
// 	printf("\t%d\n\n\n", printf("%-*.*p|", 29, 15, tab));

// printf("%s\n", "4 : l < w < p");
// 	printf("\t%d\n", ft_printf("%19.22p|", tab)); //       l < w < p      >> 000000000tab	12
// 	printf("\t%d\n\n", printf("%19.22p|", tab));
// 	printf("\t%d\n", ft_printf("%-19.22p|", tab)); //                   >> 000000000tab	12
// 	printf("\t%d\n\n\n", printf("%-19.22p|", tab));

// 	printf("\t%d\n", ft_printf("%19.30p|", tab));
// 	printf("\t%d\n\n", printf("%19.30p|", tab));
// 	printf("\t%d\n", ft_printf("%-19.30p|", tab));
// 	printf("\t%d\n\n\n", printf("%-19.30p|", tab));

// printf("%s\n", "5 : p < l < w");
// 	printf("\t%d\n", ft_printf("%25.4p|", tab)); //    p < l < w      >>          tab	15
// 	printf("\t%d\n\n", printf("%25.4p|", tab));
// 	printf("\t%d\n", ft_printf("%-25.4p|", tab)); //                >> tab         	15
// 	printf("\t%d\n\n\n", printf("%-25.4p|", tab));

// 	printf("\t%d\n", ft_printf("%35.4p|", tab));
// 	printf("\t%d\n\n", printf("%35.4p|", tab));
// 	printf("\t%d\n", ft_printf("%-35.4p|", tab));
// 	printf("\t%d\n\n\n", printf("%-35.4p|", tab));

// printf("%s\n", "6 : w < l < p");
// 	printf("\t%d\n", ft_printf("%2.21p|", tab)); //    w < l < p      >> 0000tab		10
// 	printf("\t%d\n\n", printf("%2.21p|", tab));
// 	printf("\t%d\n", ft_printf("%-2.21p|", tab)); //                >> 0000tab		10
// 	printf("\t%d\n\n\n", printf("%-2.21p|", tab));

// 	printf("\t%d\n", ft_printf("%2.30p|", tab));
// 	printf("\t%d\n\n", printf("%2.30p|", tab));
// 	printf("\t%d\n", ft_printf("%-2.30p|", tab));
// 	printf("\t%d\n\n\n", printf("%-2.30p|", tab));

// printf("\n\n%s\n", "########o#l#o#l#o##########			02 NEGATIVE PRECISION");
// printf("%s\n", "1 : w < p < l");
// 	printf("\t%d\n", ft_printf("|%3.*p|", 5, tab));
// 	printf("\t%d\n\n", printf("|%3.*p|", 5, tab));

// 	printf("\t%d\n", ft_printf("|%3.5p|", tab));
// 	printf("\t%d\n\n", printf("|%3.5p|", tab));

// 	printf("\t%d\n", ft_printf("|%3.*p|", -5, tab));
// 	printf("\t%d\n\n\n", printf("|%3.*p|", -5, tab));

// printf("%s\n", "2 : p < w < l");
// 	printf("\t%d\n", ft_printf("|%6.*p|", 3, tab));
// 	printf("\t%d\n\n", printf("|%6.*p|", 3, tab));
// 	printf("\t%d\n", ft_printf("|%6.*p|", -3, tab));
// 	printf("\t%d\n\n\n", printf("|%6.*p|", -3, tab));

// printf("%s\n", "3 : l < p < w");
// 	printf("\t%d\n", ft_printf("|%25.*p|", 18, tab));
// 	printf("\t%d\n\n", printf("|%25.*p|", 18, tab));
// 	printf("\t%d\n", ft_printf("|%25.*p|", -18, tab));
// 	printf("\t%d\n\n\n", printf("|%25.*p|", -18, tab));

// printf("%s\n", "4 : l < w < p");
// 	printf("\t%d\n", ft_printf("|%20.*p|", 25, tab));
// 	printf("\t%d\n\n", printf("|%20.*p|", 25, tab));
// 	printf("\t%d\n", ft_printf("|%20.*p|", -25, tab));
// 	printf("\t%d\n\n\n", printf("|%20.*p|", -25, tab));

// printf("%s\n", "5 : p < l < w");
// 	printf("\t%d\n", ft_printf("|%20.*p|", 3, tab));
// 	printf("\t%d\n\n", printf("|%20.*p|", 3, tab));
// 	printf("\t%d\n", ft_printf("|%20.*p|", -3, tab));
// 	printf("\t%d\n\n\n", printf("|%20.*p|", -3, tab));

// printf("%s\n", "6 : w < l < p");
// 	printf("\t%d\n", ft_printf("|%2.*p|", 18, tab));
// 	printf("\t%d\n\n", printf("|%2.*p|", 18, tab));
// 	printf("\t%d\n", ft_printf("|%2.*p|", -18, tab));
// 	printf("\t%d\n\n\n", printf("|%2.*p|", -18, tab));

// 	printf("\t%d\n", printf("|%10.*p|", 0, tab));
// 	printf("\t%d\n\n\n", printf("|%10.*p|", 0, tab));

// printf("%s\n", "7 : w < l");
// 	printf("\t%d\n", ft_printf("|%3p|", tab));
// 	printf("\t%d\n\n", printf("|%3p|", tab));

// printf("%s\n", "8 : l < w");
// 	printf("\t%d\n", ft_printf("|%30p|", tab));
// 	printf("\t%d\n\n", printf("|%30p|",tab));
// 	printf("\t%d\n", ft_printf("|%38p|", tab));
// 	printf("\t%d\n\n\n", printf("|%38p|", tab));

// 	free(tab);
// 	free(tab2);
// }

// printf("%s", "########o#l#o#l#o##########		x	X	u	######## from csnowbal ##########");
// printf("%s", "########o#l#o#l#o##########			x		");
// 	ft_printf("--------------------%%x--------------------\n");
// 	printf("01) standart PRINTF : |%x|\n", 34);
// 	ft_printf("01) my       PRINTF : |%x|\n", 34);
// 	printf("02) standart PRINTF : |%x|\n", -34);
// 	ft_printf("02) my       PRINTF : |%x|\n", -34);
// 	printf("03) standart PRINTF : |%-x|\n", 50);
// 	ft_printf("03) my       PRINTF : |%-x|\n", 50);
// 	printf("04) standart PRINTF : |%10x|\n", 90);
// 	ft_printf("04) my       PRINTF : |%10x|\n", 90);
// 	printf("05) standart PRINTF : |%.10x|\n", 90);
// 	ft_printf("05) my       PRINTF : |%.10x|\n", 90);
// 	printf("06) standart PRINTF : |%15x|\n", -100);
// 	ft_printf("06) my       PRINTF : |%15x|\n", -100);
// 	printf("07) standart PRINTF : |%.15x|\n", -100);
// 	ft_printf("07) my       PRINTF : |%.15x|\n", -100);
// 	printf("08) standart PRINTF : |%10.5x|\n", 52);
// 	ft_printf("08) my       PRINTF : |%10.5x|\n", 52);
// 	printf("09) standart PRINTF : |%5.10x|\n", 52);
// 	ft_printf("09) my       PRINTF : |%5.10x|\n", 52);
// 	printf("10) standart PRINTF : |%20.15x|\n", -100000);
// 	ft_printf("10) my       PRINTF : |%20.15x|\n", -100000);
// 	printf("11) standart PRINTF : |%15.20x|\n", -100000);
// 	ft_printf("11) my       PRINTF : |%15.20x|\n", -100000);
// 	printf("12) standart PRINTF : |%-10x|\n", 144);
// 	ft_printf("12) my       PRINTF : |%-10x|\n", 144);
// 	printf("13) standart PRINTF : |%-.10x|\n", 144);
// 	ft_printf("13) my       PRINTF : |%-.10x|\n", 144);
// 	printf("14) standart PRINTF : |%-20x|\n", -20000000);
// 	ft_printf("14) my       PRINTF : |%-20x|\n", -20000000);
// 	printf("15) standart PRINTF : |%08x|\n", 64);
// 	ft_printf("15) my       PRINTF : |%08x|\n", 64);
// 	printf("16) standart PRINTF : |%03.4x|\n", 10);
// 	ft_printf("16) my       PRINTF : |%03.4x|\n", 10);
// 	printf("17) standart PRINTF : |%.x|\n", 0);
// 	ft_printf("17) my       PRINTF : |%.x|\n", 0);
// 	printf("18) standart PRINTF : |%.x|\n", 88);
// 	ft_printf("18) my       PRINTF : |%.x|\n", 88);
// 	printf("18+) standart PRINTF : |%.x|\n", 89);
// 	ft_printf("18+) my       PRINTF : |%.x|\n", 89);
// 	printf("18+) standart PRINTF : |%.x|\n", 90);
// 	ft_printf("18+) my       PRINTF : |%.x|\n", 90);
// 	printf("19) standart PRINTF : |%x|\n", UINT_MAX);
// 	ft_printf("19) my       PRINTF : |%x|\n", UINT_MAX);
// 	printf("20) standart PRINTF : |%x| |%x|\n", (unsigned int)-1, UINT_MAX + 1);
// 	ft_printf("20) my       PRINTF : |%x| |%x|\n", (unsigned int)-1, UINT_MAX + 1);


// 	ft_printf("--------------------%%X--------------------\n");
// 	printf("01) standart PRINTF : |%X|\n", 34);
// 	ft_printf("01) my       PRINTF : |%X|\n", 34);
// 	printf("02) standart PRINTF : |%X|\n", -34);
// 	ft_printf("02) my       PRINTF : |%X|\n", -34);
// 	printf("03) standart PRINTF : |%-X|\n", 50);
// 	ft_printf("03) my       PRINTF : |%-X|\n", 50);
// 	printf("04) standart PRINTF : |%10X|\n", 90);
// 	ft_printf("04) my       PRINTF : |%10X|\n", 90);
// 	printf("05) standart PRINTF : |%.10X|\n", 90);
// 	ft_printf("05) my       PRINTF : |%.10X|\n", 90);
// 	printf("06) standart PRINTF : |%15X|\n", -100);
// 	ft_printf("06) my       PRINTF : |%15X|\n", -100);
// 	printf("07) standart PRINTF : |%.15X|\n", -100);
// 	ft_printf("07) my       PRINTF : |%.15X|\n", -100);
// 	printf("08) standart PRINTF : |%10.5X|\n", 52);
// 	ft_printf("08) my       PRINTF : |%10.5X|\n", 52);
// 	printf("09) standart PRINTF : |%5.10X|\n", 52);
// 	ft_printf("09) my       PRINTF : |%5.10X|\n", 52);
// 	printf("10) standart PRINTF : |%20.15X|\n", -100000);
// 	ft_printf("10) my       PRINTF : |%20.15X|\n", -100000);
// 	printf("11) standart PRINTF : |%15.20X|\n", -100000);
// 	ft_printf("11) my       PRINTF : |%15.20X|\n", -100000);
// 	printf("12) standart PRINTF : |%-10X|\n", 144);
// 	ft_printf("12) my       PRINTF : |%-10X|\n", 144);
// 	printf("13) standart PRINTF : |%-.10X|\n", 144);
// 	ft_printf("13) my       PRINTF : |%-.10X|\n", 144);
// 	printf("14) standart PRINTF : |%-20X|\n", -20000000);
// 	ft_printf("14) my       PRINTF : |%-20X|\n", -20000000);
// 	printf("15) standart PRINTF : |%08X|\n", 64);
// 	ft_printf("15) my       PRINTF : |%08X|\n", 64);
// 	printf("16) standart PRINTF : |%03.4X|\n", 10);
// 	ft_printf("16) my       PRINTF : |%03.4X|\n", 10);
// 	printf("17) standart PRINTF : |%.X|\n", 0);
// 	ft_printf("17) my       PRINTF : |%.X|\n", 0);
// 	printf("18) standart PRINTF : |%.X|\n", 88);
// 	ft_printf("18) my       PRINTF : |%.X|\n", 88);
// 	printf("19) standart PRINTF : |%X|\n", UINT_MAX);
// 	ft_printf("19) my       PRINTF : |%X|\n", UINT_MAX);




// ft_printf("--------------------%%u--------------------\n");
// 	printf("01) standart PRINTF : |%u|\n", 34);
// 	ft_printf("01) my       PRINTF : |%u|\n", 34);
// 	printf("02) standart PRINTF : |%u|\n", -34);
// 	ft_printf("02) my       PRINTF : |%u|\n", -34);
// 	printf("03) standart PRINTF : |%-u|\n", 50);
// 	ft_printf("03) my       PRINTF : |%-u|\n", 50);
// 	printf("04) standart PRINTF : |%10u|\n", 90);
// 	ft_printf("04) my       PRINTF : |%10u|\n", 90);
// 	printf("05) standart PRINTF : |%.10u|\n", 90);
// 	ft_printf("05) my       PRINTF : |%.10u|\n", 90);
// 	printf("06) standart PRINTF : |%15u|\n", -100);
// 	ft_printf("06) my       PRINTF : |%15u|\n", -100);
// 	printf("07) standart PRINTF : |%.15u|\n", -100);
// 	ft_printf("07) my       PRINTF : |%.15u|\n", -100);
// 	printf("08) standart PRINTF : |%10.5u|\n", 52);
// 	ft_printf("08) my       PRINTF : |%10.5u|\n", 52);
// 	printf("09) standart PRINTF : |%5.10u|\n", 52);
// 	ft_printf("09) my       PRINTF : |%5.10u|\n", 52);
// 	printf("10) standart PRINTF : |%20.15u|\n", -100000);
// 	ft_printf("10) my       PRINTF : |%20.15u|\n", -100000);
// 	printf("11) standart PRINTF : |%15.20u|\n", -100000);
// 	ft_printf("11) my       PRINTF : |%15.20u|\n", -100000);
// 	printf("12) standart PRINTF : |%-10u|\n", 144);
// 	ft_printf("12) my       PRINTF : |%-10u|\n", 144);
// 	printf("13) standart PRINTF : |%-.10u|\n", 144);
// 	ft_printf("13) my       PRINTF : |%-.10u|\n", 144);
// 	printf("14) standart PRINTF : |%-20u|\n", -20000000);
// 	ft_printf("14) my       PRINTF : |%-20u|\n", -20000000);
// 	printf("15) standart PRINTF : |%08u|\n", 64);
// 	ft_printf("15) my       PRINTF : |%08u|\n", 64);
// 	printf("16) standart PRINTF : |%03.4u|\n", 10);
// 	ft_printf("16) my       PRINTF : |%03.4u|\n", 10);
// 	printf("17) standart PRINTF : |%u|\n", 0);
// 	ft_printf("17) my       PRINTF : |%u|\n", 0);
// 	printf("18) standart PRINTF : |%.u|\n", 0);
// 	ft_printf("18) my       PRINTF : |%.u|\n", 0);
// 	printf("19) standart PRINTF : |%10u|\n", 0);
// 	ft_printf("19) my       PRINTF : |%10u|\n", 0);
// 	printf("20) standart PRINTF : |%.u|\n", 88);
// 	ft_printf("20) my       PRINTF : |%.u|\n", 88);
// 	printf("21) standart PRINTF : |%u|\n", UINT_MAX);
// 	ft_printf("21) my       PRINTF : |%u|\n", UINT_MAX);
// 	printf("22) standart PRINTF : |%u| |%u|\n", (unsigned int)-1, UINT_MAX + 1);
// 	ft_printf("22) my       PRINTF : |%u| |%u|\n", (unsigned int)-1, UINT_MAX + 1);


// }
// printf("%s", "########o#l#o#l#o##########		u	 ########### from drina ###########");
// 	int c1;
// 	int c2;

// 	printf("\n\n\n__________________________________________________________________________________\n");
// 	printf("\nTEST_UNSIGNEu_NUMBERS\n\n");

// 	printf("Test min max\n");

// 	printf("\t%d\n", ft_printf("%%u_%%0u_%%3u_%%5u_%%10u|                   *|%u|%0u|%3u|%5u|%10u|", 0, 0, 0, 0, 0));
// 	printf("\t%d\n", printf("%%u_%%0u_%%3u_%%5u_%%10u|                   *|%u|%0u|%3u|%5u|%10u|", 0, 0, 0, 0, 0));

// 	printf("\t%d\n", ft_printf("|%%u|%%15u|%%-15u|%%015u|                    |%u|%15u|%-15u|%015u|\n", 4294967295, 4294967295, 4294967295, 4294967295));
// 	printf("\t%d\n", printf("|%%u|%%15u|%%-15u|%%015u|                    |%u|%15u|%-15u|%015u|\n", 4294967295, 4294967295, 4294967295, 4294967295));

// 	printf("\t%d\n", ft_printf("|%%u|%%15u|%%-15u|%%015u|                    |%u|%15u|%-15u|%015u|\n", -4294967295, -4294967295, -4294967295, -4294967295));
// 	printf("\t%d\n", printf("|%%u|%%15u|%%-15u|%%015u|                    |%u|%15u|%-15u|%015u|\n", -4294967295, -4294967295, -4294967295, -4294967295));

// 	printf("\t%d\n", ft_printf("|%%u|%%15u|%%-15u|%%015u|                    |%u|%15u|%-15u|%015u|\n", 2147483648, 2147483648, 2147483648, 2147483648));
// 	printf("\t%d\n", printf("|%%u|%%15u|%%-15u|%%015u|                    |%u|%15u|%-15u|%015u|\n", 2147483648, 2147483648, 2147483648, 2147483648));

// 	printf("\t%d\n", ft_printf("|%%u|%%15u|%%-15u|%%015u|                    |%u|%15u|%-15u|%015u|\n", -2147483649, -2147483649, -2147483649, -2147483649));
// 	printf("\t%d\n", printf("|%%u|%%15u|%%-15u|%%015u|                    |%u|%15u|%-15u|%015u|\n", -2147483649, -2147483649, -2147483649, -2147483649));



	// c1 = printf("|%%u|%%15u|%%-15u|%%015u|                    |%u|%15u|%-15u|%015u|\n", 4294967295, 4294967295, 4294967295, 4294967295);
	// c2 = ft_printf("|%%u|%%15u|%%-15u|%%015u|                   *|%u|%15u|%-15u|%015u|\n", 4294967295, 4294967295, 4294967295, 4294967295);
	// error(c1, c2);
	// c1 = printf("|%%u|%%15u|%%-15u|%%015u|                    |%u|%15u|%-15u|%015u|\n", -4294967295, -4294967295, -4294967295, -4294967295);
	// c2 = ft_printf("|%%u|%%15u|%%-15u|%%015u|                   *|%u|%15u|%-15u|%015u|\n", -4294967295, -4294967295, -4294967295, -4294967295);
	// error(c1, c2);
	// printf("\n");

	// printf("Test larger min max\n");
	// c1 = printf("|%%u|%%15u|%%-15u|%%015u|                    |%u|%15u|%-15u|%015u|\n", 2147483648, 2147483648, 2147483648, 2147483648);
	// c2 = ft_printf("|%%u|%%15u|%%-15u|%%015u|                   *|%u|%15u|%-15u|%015u|\n", 2147483648, 2147483648, 2147483648, 2147483648);
	// error(c1, c2);
	// c1 = printf("|%%u|%%15u|%%-15u|%%015u|                    |%u|%15u|%-15u|%015u|\n", -2147483649, -2147483649, -2147483649, -2147483649);
	// c2 = ft_printf("|%%u|%%15u|%%-15u|%%015u|                   *|%u|%15u|%-15u|%015u|\n", -2147483649, -2147483649, -2147483649, -2147483649);
	// error(c1, c2);


	// c1 = printf("|%%u|%%15u|%%-15u|%%015u|                    |%u|%15u|%-15u|%015u|\n", 2147483650, 2147483650, 2147483650, 2147483650);
	// c2 = ft_printf("|%%u|%%15u|%%-15u|%%015u|                   *|%u|%15u|%-15u|%015u|\n", 2147483650, 2147483650, 2147483650, 2147483650);
	// error(c1, c2);
	// c1 = printf("|%%u|%%15u|%%-15u|%%015u|                    |%u|%15u|%-15u|%015u|\n", 4294967296, 4294967296, 4294967296, 4294967296);
	// c2 = ft_printf("|%%u|%%15u|%%-15u|%%015u|                   *|%u|%15u|%-15u|%015u|\n", 4294967296, 4294967296, 4294967296, 4294967296);
	// error(c1, c2);
	// c1 = printf("|%%u|%%15u|%%-15u|%%015u|                    |%u|%15u|%-15u|%015u|\n", 4294967297, 4294967297, 4294967297, 4294967297);
	// c2 = ft_printf("|%%u|%%15u|%%-15u|%%015u|                   *|%u|%15u|%-15u|%015u|\n", 4294967297, 4294967297, 4294967297, 4294967297);
	// error(c1, c2);
	// c1 = printf("|%%u|%%15u|%%-15u|%%015u|                    |%u|%15u|%-15u|%015u|\n", 140737488355327, 140737488355327, 140737488355327, 140737488355327);
	// c2 = ft_printf("|%%u|%%15u|%%-15u|%%015u|                   *|%u|%15u|%-15u|%015u|\n", 140737488355327, 140737488355327, 140737488355327, 140737488355327);
	// error(c1, c2);
	// printf("\n");

	// c1 = printf("%%u_%%0u_%%3u_%%5u_%%10u|                    |%u|%0u|%3u|%5u|%10u|\n", 0, 0, 0, 0, 0);
	// c2 = ft_printf("%%u_%%0u_%%3u_%%5u_%%10u|                   *|%u|%0u|%3u|%5u|%10u|\n", 0, 0, 0, 0, 0);
	// error(c1, c2);
	// c1 = printf("%%u_%%0u_%%3u_%%5u_%%10u|                    |%u|%0u|%3u|%5u|%10u|\n", 234, 234, 234, 234, 234);
	// c2 = ft_printf("%%u_%%0u_%%3u_%%5u_%%10u|                   *|%u|%0u|%3u|%5u|%10u|\n", 234, 234, 234, 234, 234);
	// error(c1, c2);
	// c1 = printf("%%u_%%0u_%%3u_%%5u_%%10u|                    |%u|%0u|%3u|%5u|%10u|\n", -234u, -234u, -234u, -234u, -234u);
	// c2 = ft_printf("%%u_%%0u_%%3u_%%5u_%%10u|                   *|%u|%0u|%3u|%5u|%10u|\n", -234u, -234u, -234u, -234u, -234u);
	// error(c1, c2);
	// printf("\n");

	// c1 = printf("%%-u_%%-0u_%%-3u_%%-5u_%%-10u|               |%-u|%-0u|%-3u|%-5u|%-10u|\n", 0, 0, 0, 0, 0);
	// c2 = ft_printf("%%-u_%%-0u_%%-3u_%%-5u_%%-10u|              *|%-u|%-0u|%-3u|%-5u|%-10u|\n", 0, 0, 0, 0, 0);
	// error(c1, c2);
	// c1 = printf("%%-u_%%-0u_%%-3u_%%-5u_%%-10u|               |%-u|%-0u|%-3u|%-5u|%-10u|\n", 234, 234, 234, 234, 234);
	// c2 = ft_printf("%%-u_%%-0u_%%-3u_%%-5u_%%-10u|              *|%-u|%-0u|%-3u|%-5u|%-10u|\n", 234, 234, 234, 234, 234);
	// error(c1, c2);
	// c1 = printf("%%-u_%%-0u_%%-3u_%%-5u_%%-10u|               |%-u|%-0u|%-3u|%-5u|%-10u|\n", -234, -234, -234, -234, -234);
	// c2 = ft_printf("%%-u_%%-0u_%%-3u_%%-5u_%%-10u|              *|%-u|%-0u|%-3u|%-5u|%-10u|\n", -234, -234, -234, -234, -234);
	// error(c1, c2);
	// printf("\n");

	// c1 = printf("%%2u_%%3u_%%5u_%%7u_%%10u|              |%2u|%3u|%5u|%7u|%10u|\n", 0, 0, 0, 0, 0);
	// c2 = ft_printf("%%2u_%%3u_%%5u_%%7u_%%10u|             *|%2u|%3u|%5u|%7u|%10u|\n", 0, 0, 0, 0, 0);
	// error(c1, c2);
	// c1 = printf("%%2u_%%3u_%%5u_%%7u_%%10u|              |%2u|%3u|%5u|%7u|%10u|\n", 234, 234, 234, 234, 234);
	// c2 = ft_printf("%%2u_%%3u_%%5u_%%7u_%%10u|             *|%2u|%3u|%5u|%7u|%10u|\n", 234, 234, 234, 234, 234);
	// error(c1, c2);
	// c1 = printf("%%2u_%%3u_%%5u_%%7u_%%10u|              |%2u|%3u|%5u|%7u|%10u|\n", -234, -234, -234, -234, -234);
	// c2 = ft_printf("%%2u_%%3u_%%5u_%%7u_%%10u|             *|%2u|%3u|%5u|%7u|%10u|\n", -234, -234, -234, -234, -234);
	// error(c1, c2);
	// printf("\n");

	// c1 = printf("%%02u_%%03u_%%05u_%%07u_%%010u|              |%02u|%03u|%05u|%07u|%010u|\n", 0, 0, 0, 0, 0);
	// c2 = ft_printf("%%02u_%%03u_%%05u_%%07u_%%010u|             *|%02u|%03u|%05u|%07u|%010u|\n", 0, 0, 0, 0, 0);
	// error(c1, c2);
	// c1 = printf("%%02u_%%03u_%%05u_%%07u_%%010u|              |%02u|%03u|%05u|%07u|%010u|\n", 234, 234, 234, 234, 234);
	// c2 = ft_printf("%%02u_%%03u_%%05u_%%07u_%%010u|             *|%02u|%03u|%05u|%07u|%010u|\n", 234, 234, 234, 234, 234);
	// error(c1, c2);
	// c1 = printf("%%02u_%%03u_%%05u_%%07u_%%010u|              |%02u|%03u|%05u|%07u|%010u|\n", -234, -234, -234, -234, -234);
	// c2 = ft_printf("%%02u_%%03u_%%05u_%%07u_%%010u|             *|%02u|%03u|%05u|%07u|%010u|\n", -234, -234, -234, -234, -234);
	// error(c1, c2);
	// printf("\n");

	// c1 = printf("%%.0u_%%0.0u_%%3.0u_%%5.0u_%%10.0u|          |%.0u|%0.0u|%3.0u|%5.0u|%10.0u|\n", 0, 0, 0, 0, 0);
	// c2 = ft_printf("%%.0u_%%0.0u_%%3.0u_%%5.0u_%%10.0u|         *|%.0u|%0.0u|%3.0u|%5.0u|%10.0u|\n", 0, 0, 0, 0, 0);
	// error(c1, c2);
	// c1 = printf("%%.0u_%%0.0u_%%3.0u_%%5.0u_%%10.0u|          |%.0u|%0.0u|%3.0u|%5.0u|%10.0u|\n", 234, 234, 234, 234, 234);
	// c2 = ft_printf("%%.0u_%%0.0u_%%3.0u_%%5.0u_%%10.0u|         *|%.0u|%0.0u|%3.0u|%5.0u|%10.0u|\n", 234, 234, 234, 234, 234);
	// error(c1, c2);
	// c1 = printf("%%u.0_%%0.0u_%%3.0u_%%5.0u_%%10.0u|          |%.0u|%0.0u|%3.0u|%5.0u|%10.0u|\n", -234, -234, -234, -234, -234);
	// c2 = ft_printf("%%u.0_%%0.0u_%%3.0u_%%5.0u_%%10.0u|         *|%.0u|%0.0u|%3.0u|%5.0u|%10.0u|\n", -234, -234, -234, -234, -234);
	// error(c1, c2);
	// printf("\n");

	// c1 = printf("%%-.0u_%%-0.0u_%%-3.0u_%%-5.0u_%%-10.0u|     |%-.0u|%-0.0u|%-3.0u|%-5.0u|%-10.0u|\n", 0, 0, 0, 0, 0);
	// c2 = ft_printf("%%-.0u_%%-0.0u_%%-3.0u_%%-5.0u_%%-10.0u|    *|%-.0u|%-0.0u|%-3.0u|%-5.0u|%-10.0u|\n", 0, 0, 0, 0, 0);
	// error(c1, c2);
	// c1 = printf("%%-.0u_%%-0.0u_%%-3.0u_%%-5.0u_%%-10.0u|     |%-.0u|%-0.0u|%-3.0u|%-5.0u|%-10.0u|\n", 234, 234, 234, 234, 234);
	// c2 = ft_printf("%%-.0u_%%-0.0u_%%-3.0u_%%-5.0u_%%-10.0u|    *|%-.0u|%-0.0u|%-3.0u|%-5.0u|%-10.0u|\n", 234, 234, 234, 234, 234);
	// error(c1, c2);
	// c1 = printf("%%-.0u_%%-0.0u_%%-3.0u_%%-5.0u_%%-10.0u|     |%-.0u|%-0.0u|%-3.0u|%-5.0u|%-10.0u|\n", -234, -234, -234, -234, -234);
	// c2 = ft_printf("%%-.0u_%%-0.0u_%%-3.0u_%%-5.0u_%%-10.0u|    *|%-.0u|%-0.0u|%-3.0u|%-5.0u|%-10.0u|\n", -234, -234, -234, -234, -234);
	// error(c1, c2);
	// printf("\n");

	// c1 = printf("%%02.0u_%%03.0u_%%05.0u_%%07.0u_%%010.0u|    |%02.0u|%03.0u|%05.0u|%07.0u|%010.0u|\n", 0, 0, 0, 0, 0);
	// c2 = ft_printf("%%02.0u_%%03.0u_%%05.0u_%%07.0u_%%010.0u|   *|%02.0u|%03.0u|%05.0u|%07.0u|%010.0u|\n", 0, 0, 0, 0, 0);
	// error(c1, c2);
	// c1 = printf("%%02.0u_%%03.0u_%%05.0u_%%07.0u_%%010.0u|    |%02.0u|%03.0u|%05.0u|%07.0u|%010.0u|\n", 234, 234, 234, 234, 234);
	// c2 = ft_printf("%%02.0u_%%03.0u_%%05.0u_%%07.0u_%%010.0u|   *|%02.0u|%03.0u|%05.0u|%07.0u|%010.0u|\n", 234, 234, 234, 234, 234);
	// error(c1, c2);
	// c1 = printf("%%02.0u_%%03.0u_%%05.0u_%%07.0u_%%010.0u|    |%02.0u|%03.0u|%05.0u|%07.0u|%010.0u|\n", -234, -234, -234, -234, -234);
	// c2 = ft_printf("%%02.0u_%%03.0u_%%05.0u_%%07.0u_%%010.0u|   *|%02.0u|%03.0u|%05.0u|%07.0u|%010.0u|\n", -234, -234, -234, -234, -234);
	// error(c1, c2);
	// printf("\n");

	// c1 = printf("%%.3u_%%0.3u_%%3.3u_%%5.3u_%%10.3u|          |%.3u|%0.3u|%3.3u|%5.3u|%10.3u|\n", 0, 0, 0, 0, 0);
	// c2 = ft_printf("%%.3u_%%0.3u_%%3.3u_%%5.3u_%%10.3u|         *|%.3u|%0.3u|%3.3u|%5.3u|%10.3u|\n", 0, 0, 0, 0, 0);
	// error(c1, c2);
	// c1 = printf("%%.3u_%%0.3u_%%3.3u_%%5.3u_%%10.3u|          |%.3u|%0.3u|%3.3u|%5.3u|%10.3u|\n", 234, 234, 234, 234, 234);
	// c2 = ft_printf("%%.3u_%%0.3u_%%3.3u_%%5.3u_%%10.3u|         *|%.3u|%0.3u|%3.3u|%5.3u|%10.3u|\n", 234, 234, 234, 234, 234);
	// error(c1, c2);
	// c1 = printf("%%.3u_%%0.3u_%%3.3u_%%5.3u_%%10.4u|          |%.3u|%0.3u|%3.3u|%5.3u|%10.4u|\n", -234, -234, -234, -234, -234);
	// c2 = ft_printf("%%.3u_%%0.3u_%%3.3u_%%5.3u_%%10.4u|         *|%.3u|%0.3u|%3.3u|%5.3u|%10.4u|\n", -234, -234, -234, -234, -234);
	// error(c1, c2);
	// printf("\n");

	// c1 = printf("%%-.2u_%%-0.2u_%%-3.2u_%%-5.2u_%%-10.2u|     |%-.2u|%-0.2u|%-3.2u|%-5.2u|%-10.2u|\n", 0, 0, 0, 0, 0);
	// c2 = ft_printf("%%-.2u_%%-0.2u_%%-3.2u_%%-5.2u_%%-10.2u|    *|%-.2u|%-0.2u|%-3.2u|%-5.2u|%-10.2u|\n", 0, 0, 0, 0, 0);
	// error(c1, c2);
	// c1 = printf("%%-.2u_%%-0.2u_%%-3.2u_%%-5.2u_%%-10.2u|     |%-.2u|%-0.2u|%-3.2u|%-5.2u|%-10.2u|\n", 234, 234, 234, 234, 234);
	// c2 = ft_printf("%%-.2u_%%-0.2u_%%-3.2u_%%-5.2u_%%-10.2u|    *|%-.2u|%-0.2u|%-3.2u|%-5.2u|%-10.2u|\n", 234, 234, 234, 234, 234);
	// error(c1, c2);
	// c1 = printf("%%-.2u_%%-0.2u_%%-3.2u_%%-5.2u_%%-10.2u|     |%-.2u|%-0.2u|%-3.2u|%-5.2u|%-10.2u|\n", -234, -234, -234, -234, -234);
	// c2 = ft_printf("%%-.2u_%%-0.2u_%%-3.2u_%%-5.2u_%%-10.2u|    *|%-.2u|%-0.2u|%-3.2u|%-5.2u|%-10.2u|\n", -234, -234, -234, -234, -234);
	// error(c1, c2);
	// printf("\n");

	// c1 = printf("%%02.2u_%%03.2u_%%05.2u_%%07.2u_%%010.2u|    |%02.2u|%03.2u|%05.2u|%07.2u|%010.2u|\n", 0, 0, 0, 0, 0);
	// c2 = ft_printf("%%02.2u_%%03.2u_%%05.2u_%%07.2u_%%010.2u|   *|%02.2u|%03.2u|%05.2u|%07.2u|%010.2u|\n", 0, 0, 0, 0, 0);
	// error(c1, c2);
	// c1 = printf("%%02.2u_%%03.2u_%%05.2u_%%07.2u_%%010.2u|    |%02.2u|%03.2u|%05.2u|%07.2u|%010.2u|\n", 234, 234, 234, 234, 234);
	// c2 = ft_printf("%%02.2u_%%03.2u_%%05.2u_%%07.2u_%%010.2u|   *|%02.2u|%03.2u|%05.2u|%07.2u|%010.2u|\n", 234, 234, 234, 234, 234);
	// error(c1, c2);
	// c1 = printf("%%02.2u_%%03.2u_%%05.2u_%%07.2u_%%010.2u|    |%02.2u|%03.2u|%05.2u|%07.2u|%010.2u|\n", -234, -234, -234, -234, -234);
	// c2 = ft_printf("%%02.2u_%%03.2u_%%05.2u_%%07.2u_%%010.2u|   *|%02.2u|%03.2u|%05.2u|%07.2u|%010.2u|\n", -234, -234, -234, -234, -234);
	// error(c1, c2);
	// printf("\n");

	// c1 = printf("%%.5u_%%0.5u_%%3.5u_%%5.5u_%%10.5u|          |%.5u|%0.5u|%3.5u|%5.5u|%10.5u|\n", 0, 0, 0, 0, 0);
	// c2 = ft_printf("%%.5u_%%0.5u_%%3.5u_%%5.5u_%%10.5u|         *|%.5u|%0.5u|%3.5u|%5.5u|%10.5u|\n", 0, 0, 0, 0, 0);
	// error(c1, c2);
	// c1 = printf("%%.5u_%%0.5u_%%3.5u_%%5.5u_%%10.5u|          |%.5u|%0.5u|%3.5u|%5.5u|%10.5u|\n", 234, 234, 234, 234, 234);
	// c2 = ft_printf("%%.5u_%%0.5u_%%3.5u_%%5.5u_%%10.5u|         *|%.5u|%0.5u|%3.5u|%5.5u|%10.5u|\n", 234, 234, 234, 234, 234);
	// error(c1, c2);
	// c1 = printf("%%.5u_%%0.5u_%%3.5u_%%5.5u_%%6.5u|           |%.5u|%0.5u|%3.5u|%5.5u|%6.5u|\n", -234, -234, -234, -234, -234);
	// c2 = ft_printf("%%.5u_%%0.5u_%%3.5u_%%5.5u_%%6.5u|          *|%.5u|%0.5u|%3.5u|%5.5u|%6.5u|\n", -234, -234, -234, -234, -234);
	// error(c1, c2);
	// printf("\n");

	// c1 = printf("%%-.5u_%%-0.5u_%%-3.5u_%%-5.5u_%%-10.5u|     |%-.5u|%-0.5u|%-3.5u|%-5.5u|%-10.5u|\n", 0, 0, 0, 0, 0);
	// c2 = ft_printf("%%-.5u_%%-0.5u_%%-3.5u_%%-5.5u_%%-10.5u|    *|%-.5u|%-0.5u|%-3.5u|%-5.5u|%-10.5u|\n", 0, 0, 0, 0, 0);
	// error(c1, c2);
	// c1 = printf("%%-.5u_%%-0.5u_%%-3.5u_%%-5.5u_%%-10.5u|     |%-.5u|%-0.5u|%-3.5u|%-5.5u|%-10.5u|\n", 234, 234, 234, 234, 234);
	// c2 = ft_printf("%%-.5u_%%-0.5u_%%-3.5u_%%-5.5u_%%-10.5u|    *|%-.5u|%-0.5u|%-3.5u|%-5.5u|%-10.5u|\n", 234, 234, 234, 234, 234);
	// error(c1, c2);
	// c1 = printf("%%-.5u_%%-0.5u_%%-3.5u_%%-5.5u_%%-10.5u|     |%-.5u|%-0.5u|%-3.5u|%-5.5u|%-10.5u|\n", -234, -234, -234, -234, -234);
	// c2 = ft_printf("%%-.5u_%%-0.5u_%%-3.5u_%%-5.5u_%%-10.5u|    *|%-.5u|%-0.5u|%-3.5u|%-5.5u|%-10.5u|\n", -234, -234, -234, -234, -234);
	// error(c1, c2);
	// printf("\n");

	// c1 = printf("%%02.5u_%%03.5u_%%05.5u_%%07.5u_%%010.5u|    |%02.5u|%03.5u|%05.5u|%07.5u|%010.5u|\n", 0, 0, 0, 0, 0);
	// c2 = ft_printf("%%02.5u_%%03.5u_%%05.5u_%%07.5u_%%010.5u|   *|%02.5u|%03.5u|%05.5u|%07.5u|%010.5u|\n", 0, 0, 0, 0, 0);
	// error(c1, c2);
	// c1 = printf("%%02.5u_%%03.5u_%%05.5u_%%07.5u_%%010.5u|    |%02.5u|%03.5u|%05.5u|%07.5u|%010.5u|\n", 234, 234, 234, 234, 234);
	// c2 = ft_printf("%%02.5u_%%03.5u_%%05.5u_%%07.5u_%%010.5u|   *|%02.5u|%03.5u|%05.5u|%07.5u|%010.5u|\n", 234, 234, 234, 234, 234);
	// error(c1, c2);
	// c1 = printf("%%02.5u_%%03.5u_%%05.5u_%%07.5u_%%010.5u|    |%02.5u|%03.5u|%05.5u|%07.5u|%010.5u|\n", -234, -234, -234, -234, -234);
	// c2 = ft_printf("%%02.5u_%%03.5u_%%05.5u_%%07.5u_%%010.5u|   *|%02.5u|%03.5u|%05.5u|%07.5u|%010.5u|\n", -234, -234, -234, -234, -234);
	// error(c1, c2);
	// printf("\n");


// //char
// 	printf("\t%d\n", ft_printf("1 %x", 123456));
// 	printf("\t%d\n", printf("1 %x", 123456));

// 	printf("\t%d\n", ft_printf("1 %X", 123456));
// 	printf("\t%d\n", printf("1 %X", 123456));
// //string
// 	// n = ft_printf("1 %s345%s6", "abcdef", "rr");
// 	// k = printf("\n\n1 %s345%s6\n", "abcdef", "rr");
// 	// printf("\n\t%d\t%d\n", n, k);
// //hex
// 	// n = ft_printf("1 %X34", 0001);
// 	// k = printf("\n\n1 %X34\n", 0001);
// 	// printf("\n\t%d\t%d\n", n, k);





// printf("%s", "########o#l#o#l#o##########		CHARS	########o#l#o#l#o##########");
// printf("%s", "########o#l#o#l#o##########			PART 1 normal ");
// 	printf("\nTest with 0:\n");
// 	printf("\t%d\n", ft_printf("|%c|%5c|%10c|%-5c|%-c|", 0, 0, 0, 0, 0));
// 	printf("\t%d\n", printf("|%c|%5c|%10c|%-5c|%-c|", 0, 0, 0, 0, 0));


// 	printf("\nNormal tests without warnings:\n");
// 	printf("\t%d\n", ft_printf("%c, %1c, %3c, %10c", 'a', 'a', 'a', 'a'));
// 	printf("\t%d\n\n", printf("%c, %1c, %3c, %10c", 'a', 'a', 'a', 'a'));

// 	printf("\t%d\n", ft_printf("%-c, %-1c, %-3c, %-10c", 'a', 'a', 'a', 'a'));
// 	printf("\t%d\n", printf("%-c, %-1c, %-3c, %-10c", 'a', 'a', 'a', 'a'));


// // 	// assert(ft_printf("%0d|\n", 1234) == printf("%0d|\n", 1234));

// printf("%s", "########o#l#o#l#o##########		STRINGS			########o#l#o#l#o##########");
// printf("%s", "########o#l#o#l#o##########			PART 1");

// 	printf("%s\n", "#######o#l#o#l#o######## PART -1 : STR - READING %%%%%%%%%");
// 	printf("\t%d\n", ft_printf("|%%%%s|%s|*|%s|%s|\n", "abcd", "efghjhk", "rrr", "ggg"));
// 	printf("\t%d\n", printf("|%%%%s|%s|*|%s|%s|\n", "abcd", "efghjhk", "rrr"));
// 	printf("|%%s|%%s|*|%s|%s|\n", "abcd", "efghjhk", "rrr", "ggg");//
//ft_printf("|%20.-3s|\n", "abcd");
// }

// printf("%s\n", "########o#l#o#l#o####### PART 0 NULL");
// // 	// char	*str = NULL;

// // 	// //printf("\t%d\n", ft_printf("%s|", str));
// // 	// printf("\t%d\n\n", printf("%s|", str));
// // 	// printf("\t%d\n\n", printf("%.2s|", str));
// // 	// printf("\t%d\n\n", printf("%9.2s|", str));
// // 	// printf("\t%d\n\n", printf("%15.8s|", str));
// // 	// printf("\t%d\n\n", printf("%3.8s|", str));
// // 	// printf("\t%d\n\n", printf("%1.8s|", str));

// printf("%s\n", "########o#l#o#l#o####### PART 1 WITH FLAGS");
// printf("%s\n", "1 : w < p < l");
// 	printf("\t%d\n", ft_printf("%3.4s|", "123456"));
// 	printf("\t%d\n\n", printf("%3.4s|", "123456")); // 1234|   5
// 	printf("\t%d\n", ft_printf("%-3.4s|", "123456"));
// 	printf("\t%d\n\n\n", printf("%-3.4s|", "123456")); //1234|   5

// 	printf("\t%d\n", ft_printf("%6.8s|", "1234567890"));
//  	printf("\t%d\n\n", printf("%6.8s|", "1234567890"));
//  	printf("\t%d\n", ft_printf("%-6.8s|", "1234567890"));
//  	printf("\t%d\n\n\n", printf("%-6.8s|", "1234567890"));
// 			printf("%s\n", "checking * :");
//  	printf("\t%d\n", ft_printf("%*.*s|", 6, 8, "1234567890"));
//  	printf("\t%d\n\n", printf("%*.*s|", 6, 8, "1234567890"));
//  	printf("\t%d\n", ft_printf("%-*.*s|", 6, 8, "1234567890"));
//  	printf("\t%d\n\n\n", printf("%-*.*s|", 6, 8, "1234567890"));

//  printf("%s\n", "2 : p < w < l");
//  	printf("\t%d\n", ft_printf("%5.2s|", "123456"));
//  	printf("\t%d\n\n", printf("%5.2s|", "123456"));
//  	printf("\t%d\n", ft_printf("%-5.2s|", "123456"));
//  	printf("\t%d\n\n\n", printf("%-5.2s|", "123456"));

//  	printf("\t%d\n", ft_printf("%25.2s|", "1234567890"));
//  	printf("\t%d\n\n", printf("%25.2s|", "1234567890"));
//  	printf("\t%d\n", ft_printf("%-25.2s|", "1234567890"));
//  	printf("\t%d\n\n\n", printf("%-25.2s|", "1234567890"));

//  	printf("\t%d\n", ft_printf("%*.*s|", 25, 2, "1234567890"));
//  	printf("\t%d\n\n", printf("%*.*s|", 25, 2, "1234567890"));
//  	printf("\t%d\n", ft_printf("%-*.*s|", 25, 2, "1234567890"));
//  	printf("\t%d\n\n\n", printf("%-*.*s|", 25, 2, "1234567890"));

// printf("%s\n", "3 : l < p < w");
//  	printf("\t%d\n", ft_printf("%9.5s|", "123"));
//  	printf("\t%d\n\n", printf("%9.5s|", "123"));
//  	printf("\t%d\n", ft_printf("%-9.5s|", "123"));
//  	printf("\t%d\n\n\n", printf("%-9.5s|", "123"));

//  	printf("\t%d\n", ft_printf("%29.15s|", "1234567890"));
//  	printf("\t%d\n\n", printf("%29.15s|", "1234567890"));
//  	printf("\t%d\n", ft_printf("%-29.15s|", "1234567890"));
//  	printf("\t%d\n\n\n", printf("%-29.15s|", "1234567890"));

//  	printf("\t%d\n", ft_printf("%*.*s|", 29, 15, "1234567890"));
//  	printf("\t%d\n\n", printf("%*.*s|", 29, 15, "1234567890"));
//  	printf("\t%d\n", ft_printf("%-*.*s|", 29, 15, "1234567890"));
//  	printf("\t%d\n\n\n", printf("%-*.*s|", 29, 15, "1234567890"));

// printf("%s\n", "4 : l < w < p");
//  	printf("\t%d\n", ft_printf("%9.12s|", "123"));
//  	printf("\t%d\n\n", printf("%9.12s|", "123"));
//  	printf("\t%d\n", ft_printf("%-9.12s|", "123"));
//  	printf("\t%d\n\n\n", printf("%-9.12s|", "123"));

//  	printf("\t%d\n", ft_printf("%19.30s|", "1234567890"));
//  	printf("\t%d\n\n", printf("%19.30s|", "1234567890"));
//  	printf("\t%d\n", ft_printf("%-19.30s|", "1234567890"));
//  	printf("\t%d\n\n\n", printf("%-19.30s|", "1234567890"));

// printf("%s\n", "5 : p < l < w");
//  	printf("\t%d\n", ft_printf("%15.4s|", "123456"));
//  	printf("\t%d\n\n", printf("%15.4s|", "123456"));
//  	printf("\t%d\n", ft_printf("%-15.4s|", "123456"));
//  	printf("\t%d\n\n\n", printf("%-15.4s|", "123456"));

//  	printf("\t%d\n", ft_printf("%35.4s|", "1234567890"));
//  	printf("\t%d\n\n", printf("%35.4s|", "1234567890"));
//  	printf("\t%d\n", ft_printf("%-35.4s|", "1234567890"));
//  	printf("\t%d\n\n\n", printf("%-35.4s|", "1234567890"));

// printf("%s\n", "6 : w < l < p");
//  	printf("\t%d\n", ft_printf("%2.10s|", "123456"));
//  	printf("\t%d\n\n", printf("%2.10s|", "123456"));
//  	printf("\t%d\n", ft_printf("%-2.10s|", "123456"));
//  	printf("\t%d\n\n\n", printf("%-2.10s|", "123456"));

//  	printf("\t%d\n", ft_printf("%2.30s|", "123456"));
// 	printf("\t%d\n\n", printf("%2.30s|", "123456"));
//  	printf("\t%d\n", ft_printf("%-2.30s|", "123456"));
//  	printf("\t%d\n\n\n", printf("%-2.30s|", "123456"));


// printf("\n\n%s\n", "########o#l#o#l#o####### PART 2 NEGATIVE PRECISION");
// printf("%s\n", "1 : w < p < l");
// 	printf("\t%d\n", ft_printf("|%3.*s|", 5, "12345678"));
// 	printf("\t%d\n\n", printf("|%3.*s|", 5, "12345678"));

// 	printf("\t%d\n", ft_printf("|%3.5s|", "12345678"));
// 	printf("\t%d\n\n", printf("|%3.5s|", "12345678"));

// 	printf("\t%d\n", ft_printf("|%3.*s|", -5, "12345678"));
// 	printf("\t%d\n\n\n", printf("|%3.*s|", -5, "12345678"));

// printf("%s\n", "2 : p < w < l");
// 	printf("\t%d\n", ft_printf("|%6.*s|", 3, "12345678"));
// 	printf("\t%d\n\n", printf("|%6.*s|", 3, "12345678"));
// 	printf("\t%d\n", ft_printf("|%6.*s|", -3, "12345678"));
// 	printf("\t%d\n\n\n", printf("|%6.*s|", -3, "12345678"));

// printf("%s\n", "3 : l < p < w");
// 	printf("\t%d\n", ft_printf("|%15.*s|", 10, "12345678"));
// 	printf("\t%d\n\n", printf("|%15.*s|", 10, "12345678"));
// 	printf("\t%d\n", ft_printf("|%15.*s|", -10, "12345678"));
// 	printf("\t%d\n\n\n", printf("|%15.*s|", -10, "12345678"));

// printf("%s\n", "4 : l < w < p");
// 	printf("\t%d\n", ft_printf("|%10.*s|", 13, "12345678"));
// 	printf("\t%d\n\n", printf("|%10.*s|", 13, "12345678"));
// 	printf("\t%d\n", ft_printf("|%10.*s|", -13, "12345678"));
// 	printf("\t%d\n\n\n", printf("|%10.*s|", -13, "12345678"));

// printf("%s\n", "5 : p < l < w");
// 	printf("\t%d\n", ft_printf("|%10.*s|", 3, "12345678"));
// 	printf("\t%d\n\n", printf("|%10.*s|", 3, "12345678"));
// 	printf("\t%d\n", ft_printf("|%10.*s|", -3, "12345678"));
// 	printf("\t%d\n\n\n", printf("|%10.*s|", -3, "12345678"));

// printf("%s\n", "6 : w < l < p");
// 	printf("\t%d\n", ft_printf("|%2.*s|", 13, "12345678"));
// 	printf("\t%d\n\n", printf("|%2.*s|", 13, "12345678"));
// 	printf("\t%d\n", ft_printf("|%2.*s|", -13, "12345678"));
// 	printf("\t%d\n\n\n", printf("|%2.*s|", -13, "12345678"));

// 	printf("\t%d\n", printf("|%10.*s|", 0, "12345678"));
// 	printf("\t%d\n\n\n", printf("|%10.*s|", 0, "12345678"));

// printf("%s\n", "7 : w < l");
// 	printf("\t%d\n", ft_printf("|%3s|", "12345678"));
// 	printf("\t%d\n\n", printf("|%3s|", "12345678"));

// printf("%s\n", "8 : l < w");
// 	printf("\t%d\n", ft_printf("|%10s|", "12345678"));
// 	printf("\t%d\n\n", printf("|%10s|","12345678"));
// 	printf("\t%d\n", ft_printf("|%8s|", "12345678"));
// 	printf("\t%d\n\n\n", printf("|%8s|", "12345678"));


// printf("\n\n%s\n", "########o#l#o#l#o####### PART 3 additional");
// 	printf("\t%d\n", ft_printf("%.*s", 4, "abcdefgrajlhkf"));
// 	printf("\t%d\n", printf("%.*s", 4, "abcdefgrajlhkf"));
// 	printf("\t%d\n", ft_printf("%.*s", 4, "abc"));
// 	printf("\t%d\n\n", printf("%.*s", 4, "abc"));

// 	printf("\t%d\n", ft_printf("%10.*s", 4, "abcdefgrajlhkf"));
// 	printf("\t%d\n", printf("%10.*s", 4, "abcdefgrajlhkf"));
// 	printf("\t%d\n", ft_printf("%10.*s", 4, "abc"));
// 	printf("\t%d\n\n", printf("%10.*s", 4, "abc"));

// 	printf("\t%d\n", ft_printf("%-10.*s", 4, "abcdefgrajlhkf"));
// 	printf("\t%d\n", printf("%-10.*s", 4, "abcdefgrajlhkf"));
// 	printf("\t%d\n", ft_printf("%-10.*s", 4, "abc"));
// 	printf("\t%d\n\n", printf("%-10.*s", 4, "abc"));

// 	printf("\t%d\n", ft_printf("%2.4s", "abcdefgrajlhkf"));
// 	printf("\t%d\n", printf("%2.4s", "abcdefgrajlhkf"));
// 	printf("\t%d\n", ft_printf("%2.4s", "abc"));
// 	printf("\t%d\n\n", printf("%2.4s", "abc"));

// 	printf("\t%d\n", ft_printf("%-2.4s", "abcdefgrajlhkf"));
// 	printf("\t%d\n", printf("%-2.4s", "abcdefgrajlhkf"));
// 	printf("\t%d\n", ft_printf("%-2.4s", "abc"));
// 	printf("\t%d\n\n", printf("%-2.4s", "abc"));


// 	printf("\t%d\n", ft_printf("%s|", "abc"));
// 	printf("\t%d\n\n", printf("%s|", "abc"));

// 	printf("\t%d\n", ft_printf("%4s|", "abcdefgrajlhkf"));
// 	printf("\t%d\n\n", printf("%4s|", "abcdefgrajlhkf"));

// 	printf("\t%d\n", ft_printf("%-4s|", "abc"));
// 	printf("\t%d\n\n", printf("%-4s|", "abc"));

// 	printf("\t%d\n", ft_printf("%21s|", "abcdefgrajlhkfabcdefgrajlhkf"));
// 	printf("\t%d\n\n", printf("%21s|", "abcdefgrajlhkfabcdefgrajlhkf"));

// 	printf("\t%d\n", ft_printf("%-21s|", "abc"));
// 	printf("\t%d\n\n", printf("%-21s|", "abc"));

// 	printf("\t%d\n", ft_printf("%21s|", "abcdefgrajlhkfabcdefgrajlhkf"));
// 	printf("\t%d\n\n", printf("%21s|", "abcdefgrajlhkfabcdefgrajlhkf"));

// 	printf("\t%d\n", ft_printf("%-21s|", "abc"));
// 	printf("\t%d\n\n", printf("%-21s|", "abc"));



// //	//	DIGITS - NEGATIVE PRECISION
// 	printf("|%3.*d|\n", 5, 12345678);
// 	printf("|%3.*d|\n\n", -5, 12345678);

// 	printf("|%6.*d|\n", 3, 12345678);
// 	printf("|%6.*d|\n\n", -3, 12345678);

// 	printf("|%15.*d|\n", 10, 12345678);
// 	printf("|%15.*d|\n\n", -10, 12345678);

// 	printf("|%10.*d|\n", 13, 12345678);
// 	printf("|%10.*d|\n\n", -13, 12345678);

// 	printf("|%10.*d|\n", 3, 12345678);
// 	printf("|%10.*d|\n\n", -3, 12345678);

// 	printf("|%2.*d|\n", 13, 12345678);
// 	printf("|%2.*d|\n\n", -13, 12345678);

// 	printf("|%10.*d|\n", 0, 12345678);



// 	//DIGITS
// printf("%s", "########o#l#o#l#o##########		DIGITS D I 	########o#l#o#l#o##########");
// // diu: 01 width (format str)(flag 0)
// 	// 02 width (* argument)(flag 0)
// 	// 03 width (format str)()
// 	// 04 width (* argument)()
// 	// 05 width (format str)(flag -)
// 	// 06 width (* argument)(flag -)
// 	//    UB for flag '-'
// 	// 07 COMBO
// 	// 08 NEGATIVE PRECISION
// 	// 09 from csnowbal
// 	// 10 large numbers


// // //########o#l#o#l#o##########			01 width (format str)(flag 0)
// printf("***   01 >> %s:\n", "width passed in a format string + flag 0");
// 	printf("\t%d\n", ft_printf("%0d|\t", -1234));
// 	printf("\t%d - real ptf\n\n", printf("%0d|\t", -1234));

// 	printf("\t%d\n", ft_printf("%015d|\t", -1234));
// 	printf("\t%d - real ptf\n\n", printf("%015d|\t", -1234));

// 	printf("\t%d\n", ft_printf("%04d|", -1234));
// 	printf("\t%d - real ptf\n\n", printf("%04d|", -1234));

// 	printf("\t%d\n", ft_printf("%07d|", -1234));
// 	printf("\t%d - real ptf\n\n", printf("%07d|", -1234));

// 	printf("\t%d\n", ft_printf("%012d|", -1234));
// 	printf("\t%d - real ptf\n\n", printf("%012d|", -1234));

// 	printf("\t%d\n", ft_printf("%030d|", -1234));
// 	printf("\t%d - real ptf\n\n", printf("%030d|", -1234));

// 	printf("\t%d\n", ft_printf("%0d%05d|", -1234, -77));
// 	printf("\t%d - real ptf\n\n", printf("%0d%05d|", -1234, -77));

// 	printf("%d\n", ft_printf("eee%03de%04dee%05d%06d%08d%0d%d|\t", 55555, 55555, 55555, 55555, 55555, 55555, 55555));
// 	printf("%d - real ptf\n\n", printf("eee%03de%04dee%05d%06d%08d%0d%d|\t", 55555, 55555, 55555, 55555, 55555, 55555, 55555));

// // //########o#l#o#l#o##########			02 width (* argument)(flag 0)
// printf("\n\n***   02 >> %s:\n", "width passed as arg + zero");
// 	printf("\t%d\n", ft_printf("%0*d|\t", 2, 1234));
// 	printf("\t%d - real ptf\n\n", printf("%0*d|\t", 2, 1234));

// 	printf("%d\n", ft_printf("%0*deeee|\t", 1, 55555));
// 	printf("%d - real ptf\n\n", printf("%0*deeee|\t", 1, 55555));

// 	printf("%d\n", ft_printf("eee%0*dee|\t", 4, 55555));
// 	printf("%d - real ptf\n\n", printf("eee%0*dee|\t", 4, 55555));

// 	printf("\t%d\n", ft_printf("%0*d|\t", 7, 1234));
// 	printf("\t%d - real ptf\n\n", printf("%0*d|\t", 7, 1234));

// 	printf("\t%d\n", ft_printf("%0*d|\t", 13, 1234));
// 	printf("\t%d - real ptf\n\n", printf("%0*d|\t", 13, 1234));

// 	printf("\t%d\n", ft_printf("%0*d|\t", 30, 1234));
// 	printf("\t%d - real ptf\n\n", printf("%0*d|\t", 30, 1234));

// 	printf("%d\n", ft_printf("eee%0*dee%0*d%0*d%d|\t", 4, 55555, 8, 55555, 0, 55555, 55555));
// 	printf("%d - real ptf\n\n", printf("eee%0*dee%0*d%0*d%d|\t", 4, 55555, 8, 55555, 0, 55555, 55555));

// //########o#l#o#l#o##########			03 width (format str)()
// printf("\n\n***   03 >> %s:\n", "width passed in a format string, no zero");
// 	printf("\t%d\n", ft_printf("%3d|\t", 1234));
// 	printf("\t%d - real ptf\n\n", printf("%3d|\t", 1234));

// 	printf("\t%d\n", ft_printf("%7d|", 1234));
// 	printf("\t%d - real ptf\n\n", printf("%7d|", 1234));

// 	printf("\t%d\n", ft_printf("%45d|", 1234));
// 	printf("\t%d - real ptf\n\n", printf("%45d|", 1234));

// 	printf("%d\n", ft_printf("eee%4dee%8d%0d%d|\t", 55555, 55555, 55555, 55555));
// 	printf("%d - real ptf\n\n", printf("eee%4dee%8d%0d%d|\t", 55555, 55555, 55555, 55555));//00 - UB!

// //########o#l#o#l#o##########			04 width (* argument)()
// printf("\n\n***   04 >> %s:\n", "width passed as arg, no zero");
// 	printf("\t%d\n", ft_printf("%*d|", 3, 1234));
// 	printf("\t%d - real ptf\n\n", printf("%*d|", 3, 1234));

// 	printf("\t%d\n", ft_printf("%*d|", 7, 1234));
// 	printf("\t%d - real ptf\n\n", printf("%*d|", 7, 1234));

// 	printf("\t%d\n", ft_printf("%*d|", 45, 1234));
// 	printf("\t%d - real ptf\n\n", printf("%*d|", 45, 1234));

// 	printf("%d\n", ft_printf("eee%*dee%*d%*d%d|\t", 4, 55555, 8, 55555, 0, 55555, 55555));
// 	printf("%d - real ptf\n\n", printf("eee%*dee%*d%*d%d|\t", 4, 55555, 8, 55555, 0, 55555, 55555));

// //########o#l#o#l#o##########			05 width (format str)(flag -)
// printf("\n\n***   05 >> %s:\n", "width passed in a format string, flag '-'");
// 	printf("\t%d\n", ft_printf("%16d|", 1234));
// 	printf("\t%d - real ptf\n\n", printf("%16d|", 1234));
// 	printf("\t%d\n", ft_printf("%-16d|", 1234));
// 	printf("\t%d - real ptf\n\n", printf("%-16d|", 1234));
// 	printf("\t%d\n", ft_printf("%6d|", 1234));
// 	printf("\t%d - real ptf\n\n", printf("%6d|", 1234));
// 	printf("\t%d\n", ft_printf("%-6d|", 1234));
// 	printf("\t%d - real ptf\n\n\n", printf("%-6d|", 1234));


// 	printf("\t%d\n", ft_printf("%2d|", 1234));
// 	printf("\t%d - real ptf\n\n", printf("%2d|", 1234));

// 	printf("\t%d\n", ft_printf("%-2d|", 1234));
// 	printf("\t%d - real ptf\n\n", printf("%-2d|", 1234));

// 	printf("\t%d\n", ft_printf("%1d|", 1234));
// 	printf("\t%d - real ptf\n\n", printf("%1d|", 1234));

// 	printf("\t%d\n", ft_printf("%-1d|", 1234));
// 	printf("\t%d - real ptf\n\n", printf("%-1d|", 1234));

// 	printf("\t%d\n", ft_printf("%0d|", 1234));
// 	printf("\t%d - real ptf\n\n\n", printf("%0d|", 1234));

// //########o#l#o#l#o##########			06 width (* argument)(flag -)
// printf("\n\n***   06 >> %s:\n", "width passed as arg, flag '-'");
// 	printf("\t%d\n", ft_printf("%*d|", 16, 1234));
// 	printf("\t%d - real ptf\n\n", printf("%*d|", 16, 1234));
// 	printf("\t%d\n", ft_printf("%-*d|", 16, 1234));
// 	printf("\t%d - real ptf\n\n", printf("%-*d|", 16, 1234));
// 	printf("\t%d\n", ft_printf("%*d|", 6, 1234));
// 	printf("\t%d - real ptf\n\n", printf("%*d|", 6, 1234));
// 	printf("\t%d\n", ft_printf("%-*d|", 6, 1234));
// 	printf("\t%d - real ptf\n\n\n", printf("%-*d|", 6, 1234));

// 	printf("\t%d\n", ft_printf("%*d|", 2, 1234));
// 	printf("\t%d - real ptf\n\n", printf("%*d|", 2, 1234));
// 	printf("\t%d\n", ft_printf("%-*d|", 2, 1234));
// 	printf("\t%d - real ptf\n\n", printf("%-*d|", 2, 1234));
// 	printf("\t%d\n", ft_printf("%-*d|", 0, 1234));
// 	printf("\t%d - real ptf\n\n", printf("%-*d|", 0, 1234));


// // //########o#l#o#l#o##########			07 COMBO : width, precision, '-'
// printf("\n\n***   07 >> %s:\n", "06 COMBO : width, precision, '-'");
// printf("%s\n", "1 : w < p < l");
// 	printf("\t%d\n", ft_printf("%3.4d|", 123456)); //     w < p < l      >> 123456	6
// 	printf("\t%d\n\n", printf("%3.4d|", 123456));
// 	printf("\t%d\n", ft_printf("%-3.4d|", 123456)); //                 >> 123456	6
// 	printf("\t%d\n\n\n", printf("%-3.4d|", 123456));

// 	printf("\t%d\n", ft_printf("%8.10d|", 1234567890));
// 	printf("\t%d\n\n", printf("%8.10d|", 1234567890));
// 	printf("\t%d\n", ft_printf("%-8.10d|", 1234567890));
// 	printf("\t%d\n\n\n", printf("%-8.10d|", 1234567890));
// 		printf("%s\n", "checking * :");
// 	printf("\t%d\n", ft_printf("%*.*d|", 8, 10, 1234567890));
// 	printf("\t%d\n\n", printf("%*.*d|", 8, 10, 1234567890));
// 	printf("\t%d\n", ft_printf("%-*.*d|", 8, 10, 1234567890));
// 	printf("\t%d\n\n\n", printf("%-*.*d|", 8, 10, 1234567890));

// printf("%s\n", "1 : w < p < l + negative");
// 	printf("\t%d\n", ft_printf("%3.4d|", -123456)); //     w < p < l      >> 123456	6
// 	printf("\t%d\n\n", printf("%3.4d|", -123456));
// 	printf("\t%d\n", ft_printf("%-3.4d|", -123456)); //                 >> 123456	6
// 	printf("\t%d\n\n\n", printf("%-3.4d|", -123456));

// 	printf("\t%d\n", ft_printf("%8.10d|", -1234567890));
// 	printf("\t%d\n\n", printf("%8.10d|", -1234567890));
// 	printf("\t%d\n", ft_printf("%-8.10d|", -1234567890));
// 	printf("\t%d\n\n\n", printf("%-8.10d|", -1234567890));
// 		printf("%s\n", "checking * :");
// 	printf("\t%d\n", ft_printf("%*.*d|", 8, 10, -1234567890));
// 	printf("\t%d\n\n", printf("%*.*d|", 8, 10, -1234567890));
// 	printf("\t%d\n", ft_printf("%-*.*d|", 8, 10, -1234567890));
// 	printf("\t%d\n\n\n", printf("%-*.*d|", 8, 10, -1234567890));

// printf("%s\n", "2 : p < w < l");
// 	printf("\t%d\n", ft_printf("%5.2d|", 123456)); //     p < w < l      >> 123456	6
// 	printf("\t%d\n\n", printf("%5.2d|", 123456));
// 	printf("\t%d\n", ft_printf("%-5.2d|", 123456)); //                 >> 123456	6
// 	printf("\t%d\n\n\n", printf("%-5.2d|", 123456));

// 	printf("\t%d\n", ft_printf("%25.2d|", 1234567890));
// 	printf("\t%d\n\n", printf("%25.2d|", 1234567890));
// 	printf("\t%d\n", ft_printf("%-25.2d|", 1234567890));
// 	printf("\t%d\n\n\n", printf("%-25.2d|", 1234567890));

// 	printf("\t%d\n", ft_printf("%*.*d|", 25, 2, 1234567890));
// 	printf("\t%d\n\n", printf("%*.*d|", 25, 2, 1234567890));
// 	printf("\t%d\n", ft_printf("%-*.*d|", 25, 2, 1234567890));
// 	printf("\t%d\n\n\n", printf("%-*.*d|", 25, 2, 1234567890));

// printf("%s\n", "2 : p < w < l + negative");
// 	printf("\t%d\n", ft_printf("%5.2d|", -123456)); //     p < w < l      >> -123456	6
// 	printf("\t%d\n\n", printf("%5.2d|", -123456));
// 	printf("\t%d\n", ft_printf("%-5.2d|", -123456)); //                 >> -123456	6
// 	printf("\t%d\n\n\n", printf("%-5.2d|", -123456));

// 	printf("\t%d\n", ft_printf("%25.2d|", -1234567890));
// 	printf("\t%d\n\n", printf("%25.2d|", -1234567890));
// 	printf("\t%d\n", ft_printf("%-25.2d|", -1234567890));
// 	printf("\t%d\n\n\n", printf("%-25.2d|", -1234567890));

// 	printf("\t%d\n", ft_printf("%*.*d|", 25, 2, -1234567890));
// 	printf("\t%d\n\n", printf("%*.*d|", 25, 2, -1234567890));
// 	printf("\t%d\n", ft_printf("%-*.*d|", 25, 2, -1234567890));
// 	printf("\t%d\n\n\n", printf("%-*.*d|", 25, 2, -1234567890));

// printf("%s\n", "3 : l < p < w");
// 	printf("\t%d\n", ft_printf("%9.5d|", 123)); //        l < p < w      >>     00123		9
// 	printf("\t%d\n\n", printf("%9.5d|", 123));
// 	printf("\t%d\n", ft_printf("%-9.5d|", 123)); //                    >> 00123    		9
// 	printf("\t%d\n\n\n", printf("%-9.5d|", 123));

// 	printf("\t%d\n", ft_printf("%29.15d|", 1234567890));
// 	printf("\t%d\n\n", printf("%29.15d|", 1234567890));
// 	printf("\t%d\n", ft_printf("%-29.15d|", 1234567890));
// 	printf("\t%d\n\n\n", printf("%-29.15d|", 1234567890));

// 	printf("\t%d\n", ft_printf("%*.*d|", 29, 15, 1234567890));
// 	printf("\t%d\n\n", printf("%*.*d|", 29, 15, 1234567890));
// 	printf("\t%d\n", ft_printf("%-*.*d|", 29, 15, 1234567890));
// 	printf("\t%d\n\n\n", printf("%-*.*d|", 29, 15, 1234567890));

// printf("%s\n", "3 : l < p < w + n");
// 	printf("\t%d\n", ft_printf("%9.5d|", -123)); //        l < p < w      >>     00123		9
// 	printf("\t%d\n\n", printf("%9.5d|", -123));
// 	printf("\t%d\n", ft_printf("%-9.5d|", -123)); //                    >> 00123    		9
// 	printf("\t%d\n\n\n", printf("%-9.5d|", -123));

// 	printf("\t%d\n", ft_printf("%29.15d|", -1234567890));
// 	printf("\t%d\n\n", printf("%29.15d|", -1234567890));
// 	printf("\t%d\n", ft_printf("%-29.15d|", -1234567890));
// 	printf("\t%d\n\n\n", printf("%-29.15d|", -1234567890));

// 	printf("\t%d\n", ft_printf("%*.*d|", 29, 15, -1234567890));
// 	printf("\t%d\n\n", printf("%*.*d|", 29, 15, -1234567890));
// 	printf("\t%d\n", ft_printf("%-*.*d|", 29, 15, -1234567890));
// 	printf("\t%d\n\n\n", printf("%-*.*d|", 29, 15, -1234567890));

// printf("%s\n", "4 : l < w < p");
// 	printf("\t%d\n", ft_printf("%9.12d|", 123)); //       l < w < p      >> 000000000123	12
// 	printf("\t%d\n\n", printf("%9.12d|", 123));
// 	printf("\t%d\n", ft_printf("%-9.12d|", 123)); //                   >> 000000000123	12
// 	printf("\t%d\n\n\n", printf("%-9.12d|", 123));

// 	printf("\t%d\n", ft_printf("%19.30d|", 1234567890));
// 	printf("\t%d\n\n", printf("%19.30d|", 1234567890));
// 	printf("\t%d\n", ft_printf("%-19.30d|", 1234567890));
// 	printf("\t%d\n\n\n", printf("%-19.30d|", 1234567890));

// printf("%s\n", "4 : l < w < p + n");
// 	printf("\t%d\n", ft_printf("%9.12d|", -123)); //       l < w < p      >> 000000000123	12
// 	printf("\t%d\n\n", printf("%9.12d|", -123));
// 	printf("\t%d\n", ft_printf("%-9.12d|", -123)); //                   >> 000000000123	12
// 	printf("\t%d\n\n\n", printf("%-9.12d|", -123));

// 	printf("\t%d\n", ft_printf("%19.30d|", -1234567890));
// 	printf("\t%d\n\n", printf("%19.30d|", -1234567890));
// 	printf("\t%d\n", ft_printf("%-19.30d|", -1234567890));
// 	printf("\t%d\n\n\n", printf("%-19.30d|", -1234567890));


// printf("%s\n", "5 : p < l < w");
// 	printf("\t%d\n", ft_printf("%15.4d|", 123456)); //    p < l < w      >>          123456	15
// 	printf("\t%d\n\n", printf("%15.4d|", 123456));
// 	printf("\t%d\n", ft_printf("%-15.4d|", 123456)); //                >> 123456         	15
// 	printf("\t%d\n\n\n", printf("%-15.4d|", 123456));

// 	printf("\t%d\n", ft_printf("%35.4d|", 1234567890));
// 	printf("\t%d\n\n", printf("%35.4d|", 1234567890));
// 	printf("\t%d\n", ft_printf("%-35.4d|", 1234567890));
// 	printf("\t%d\n\n\n", printf("%-35.4d|", 1234567890));

// printf("%s\n", "5 : p < l < w + n");
// 	printf("\t%d\n", ft_printf("%15.4d|", -123456)); //    p < l < w      >>          123456	15
// 	printf("\t%d\n\n", printf("%15.4d|", -123456));
// 	printf("\t%d\n", ft_printf("%-15.4d|", -123456)); //                >> 123456         	15
// 	printf("\t%d\n\n\n", printf("%-15.4d|", -123456));

// 	printf("\t%d\n", ft_printf("%35.4d|", -1234567890));
// 	printf("\t%d\n\n", printf("%35.4d|", -1234567890));
// 	printf("\t%d\n", ft_printf("%-35.4d|", -1234567890));
// 	printf("\t%d\n\n\n", printf("%-35.4d|", -1234567890));

// printf("%s\n", "6 : w < l < p");
// 	printf("\t%d\n", ft_printf("%2.10d|", 123456)); //    w < l < p      >> 0000123456		10
// 	printf("\t%d\n\n", printf("%2.10d|", 123456));
// 	printf("\t%d\n", ft_printf("%-2.10d|", 123456)); //                >> 0000123456		10
// 	printf("\t%d\n\n\n", printf("%-2.10d|", 123456));

// 	printf("\t%d\n", ft_printf("%2.30d|", 123456));
// 	printf("\t%d\n\n", printf("%2.30d|", 123456));
// 	printf("\t%d\n", ft_printf("%-2.30d|", 123456));
// 	printf("\t%d\n\n\n", printf("%-2.30d|", 123456));

// printf("%s\n", "6 : w < l < p + n");
// 	printf("\t%d\n", ft_printf("%2.10d|", -123456)); //    w < l < p      >> 0000123456		10
// 	printf("\t%d\n\n", printf("%2.10d|", -123456));
// 	printf("\t%d\n", ft_printf("%-2.10d|", -123456)); //                >> 0000123456		10
// 	printf("\t%d\n\n\n", printf("%-2.10d|", -123456));

// 	printf("\t%d\n", ft_printf("%2.30d|", -123456));
// 	printf("\t%d\n\n", printf("%2.30d|", -123456));
// 	printf("\t%d\n", ft_printf("%-2.30d|", -123456));
// 	printf("\t%d\n\n\n", printf("%-2.30d|", -123456));

// printf("\n\n%s\n", "########o#l#o#l#o##########			08 NEGATIVE PRECISION");
// printf("%s\n", "1 : w < p < l");
// 	printf("\t%d\n", ft_printf("|%3.*d|", 5, 12345678));
// 	printf("\t%d\n\n", printf("|%3.*d|", 5, 12345678));

// 	printf("\t%d\n", ft_printf("|%3.5d|", 12345678));
// 	printf("\t%d\n\n", printf("|%3.5d|", 12345678));

// 	printf("\t%d\n", ft_printf("|%3.*d|", -5, 12345678));
// 	printf("\t%d\n\n\n", printf("|%3.*d|", -5, 12345678));

// 	printf("\t%d\n", ft_printf("|%3.5d|", -12345678));
// 	printf("\t%d\n\n", printf("|%3.5d|", -12345678));

// 	printf("\t%d\n", ft_printf("|%3.*d|", -5, -12345678));
// 	printf("\t%d\n\n\n", printf("|%3.*d|", -5, -12345678));

// printf("%s\n", "2 : p < w < l");
// 	printf("\t%d\n", ft_printf("|%6.*d|", 3, 12345678));
// 	printf("\t%d\n\n", printf("|%6.*d|", 3, 12345678));
// 	printf("\t%d\n", ft_printf("|%6.*d|", -3, 12345678));
// 	printf("\t%d\n\n\n", printf("|%6.*d|", -3, 12345678));

// 	printf("\t%d\n", ft_printf("|%6.*d|", -3, -12345678));
// 	printf("\t%d\n\n\n", printf("|%6.*d|", -3, -12345678));

// printf("%s\n", "3 : l < p < w");
// 	printf("\t%d\n", ft_printf("|%15.*d|", 10, 12345678));
// 	printf("\t%d\n\n", printf("|%15.*d|", 10, 12345678));
// 	printf("\t%d\n", ft_printf("|%15.*d|", -10, 12345678));
// 	printf("\t%d\n\n\n", printf("|%15.*d|", -10, 12345678));

// 	printf("\t%d\n", ft_printf("|%15.*d|", -10, -12345678));
// 	printf("\t%d\n\n\n", printf("|%15.*d|", -10, -12345678));

// printf("%s\n", "4 : l < w < p");
// 	printf("\t%d\n", ft_printf("|%10.*d|", 13, 12345678));
// 	printf("\t%d\n\n", printf("|%10.*d|", 13, 12345678));
// 	printf("\t%d\n", ft_printf("|%10.*d|", -13, 12345678));
// 	printf("\t%d\n\n\n", printf("|%10.*d|", -13, 12345678));

// 	printf("\t%d\n", ft_printf("|%10.*d|", -13, -12345678));
// 	printf("\t%d\n\n\n", printf("|%10.*d|", -13, -12345678));

// printf("%s\n", "5 : p < l < w");
// 	printf("\t%d\n", ft_printf("|%10.*d|", 3, 12345678));
// 	printf("\t%d\n\n", printf("|%10.*d|", 3, 12345678));
// 	printf("\t%d\n", ft_printf("|%10.*d|", -3, 12345678));
// 	printf("\t%d\n\n\n", printf("|%10.*d|", -3, 12345678));

// 	printf("\t%d\n", ft_printf("|%10.*d|", -3, -12345678));
// 	printf("\t%d\n\n\n", printf("|%10.*d|", -3, -12345678));

// printf("%s\n", "6 : w < l < p");
// 	printf("\t%d\n", ft_printf("|%2.*d|", 13, 12345678));
// 	printf("\t%d\n\n", printf("|%2.*d|", 13, 12345678));
// 	printf("\t%d\n", ft_printf("|%2.*d|", -13, 12345678));
// 	printf("\t%d\n\n\n", printf("|%2.*d|", -13, 12345678));

// 	printf("\t%d\n", ft_printf("|%2.*d|", -13, -12345678));
// 	printf("\t%d\n\n\n", printf("|%2.*d|", -13, -12345678));

// 	printf("\t%d\n", printf("|%10.*d|", 0, 12345678));
// 	printf("\t%d\n\n\n", printf("|%10.*d|", 0, 12345678));

// 	printf("\t%d\n", printf("|%10.*d|", 0, -12345678));
// 	printf("\t%d\n\n\n", printf("|%10.*d|", 0, -12345678));

// printf("%s\n", "7 : w < l");
// 	printf("\t%d\n", ft_printf("|%3d|", 12345678));
// 	printf("\t%d\n\n", printf("|%3d|", 12345678));

// printf("%s\n", "8 : l < w");
// 	printf("\t%d\n", ft_printf("|%10d|", 12345678));
// 	printf("\t%d\n\n", printf("|%10d|", 12345678));
// 	printf("\t%d\n", ft_printf("|%8d|", 12345678));
// 	printf("\t%d\n\n\n", printf("|%8d|", 12345678));

// 	printf("\t%d\n", ft_printf("|%8d|", -12345678));
// 	printf("\t%d\n\n\n", printf("|%8d|", -12345678));



// printf("%s", "########o#l#o#l#o##########			from csnowbal");

	// ft_printf("----------------%%d-%%i--------------------\n");
	// printf("01) standart PRINTF : |%d|\n", 42);
	// ft_printf("01) my       PRINTF : |%d|\n", 42);
	// printf("02) standart PRINTF : |%i|\n", 42);
	// ft_printf("02) my       PRINTF : |%i|\n", 42);
	// printf("03) standart PRINTF : |%-d|\n", 42);
	// ft_printf("03) my       PRINTF : |%-d|\n", 42);
	// printf("04) standart PRINTF : |%10d|\n", 100);
	// ft_printf("04) my       PRINTF : |%10d|\n", 100);
	// printf("05) standart PRINTF : |%-10d|\n", 64);
	// ft_printf("05) my       PRINTF : |%-10d|\n", 64);
	// printf("06) standart PRINTF : |%.10d|\n", 100);
	// ft_printf("06) my       PRINTF : |%.10d|\n", 100);
	// printf("07) standart PRINTF : |%10.5d|\n", 100);
	// ft_printf("07) my       PRINTF : |%10.5d|\n", 100);
	// printf("08) standart PRINTF : |%5.10d|\n", 64);
	// ft_printf("08) my       PRINTF : |%5.10d|\n", 64);
	// printf("09) standart PRINTF : |%1.1d|\n", 16);
	// ft_printf("09) my       PRINTF : |%1.1d|\n", 16);
	// printf("10) standart PRINTF : |%d|\n", -42);
	// ft_printf("10) my       PRINTF : |%d|\n", -42);
	// printf("11) standart PRINTF : |%10d|\n", -42);
	// ft_printf("11) my       PRINTF : |%10d|\n", -42);
	// printf("12) standart PRINTF : |%.10d|\n", -42);
	// ft_printf("12) my       PRINTF : |%.10d|\n", -42);
	// printf("13) standart PRINTF : |%10.5d|\n", -16);
	// ft_printf("13) my       PRINTF : |%10.5d|\n", -16);
	// printf("14) standart PRINTF : |%5.10d|\n", -16);
	// ft_printf("14) my       PRINTF : |%5.10d|\n", -16);
	// printf("15) standart PRINTF : |%1.1d|\n", -20);
	// ft_printf("15) my       PRINTF : |%1.1d|\n", -20);
	// printf("16) standart PRINTF : |%-10d|\n", -50);
	// ft_printf("16) my       PRINTF : |%-10d|\n", -50);
	// printf("17) standart PRINTF : |%2d|\n", -20);
	// ft_printf("17) my       PRINTF : |%2d|\n", -20);
	// printf("18) standart PRINTF : |%.2d|\n", -20);
	// ft_printf("18) my       PRINTF : |%.2d|\n", -20);
	// printf("19) standart PRINTF : |%2d|\n", -1);
	// ft_printf("19) my       PRINTF : |%2d|\n", -1);
	// printf("20) standart PRINTF : |%.2d|\n", -1);
	// ft_printf("20) my       PRINTF : |%.2d|\n", -1);
	// printf("21) standart PRINTF : |%-10d|\n", -80);
	// ft_printf("21) my       PRINTF : |%-10d|\n", -80);
	// printf("22) standart PRINTF : |%-.10d|\n", -80);
	// ft_printf("22) my       PRINTF : |%-.10d|\n", -80);
	// printf("23) standart PRINTF : |%06d|\n", 35);
	// ft_printf("23) my       PRINTF : |%06d|\n", 35);
	// printf("24) standart PRINTF : |%06d|\n", -35);
	// ft_printf("24) my       PRINTF : |%06d|\n", -35);
	// printf("25) standart PRINTF : |%05.3d|\n", 5);
	// ft_printf("25) my       PRINTF : |%05.3d|\n", 5);
	// printf("26) standart PRINTF : |%03.5d|\n", 5);
	// ft_printf("26) my       PRINTF : |%03.5d|\n", 5);
	// printf("27) standart PRINTF : |%05.3d|\n", -5);
	// ft_printf("27) my       PRINTF : |%05.3d|\n", -5);
	// printf("28) standart PRINTF : |%03.5d|\n", -5);
	// ft_printf("28) my       PRINTF : |%03.5d|\n", -5);
	// printf("29) standart PRINTF : |%d| |%d|\n", INT_MAX, INT_MIN);
	// ft_printf("29) my       PRINTF : |%d| |%d|\n", INT_MAX, INT_MIN);
	// printf("30) standart PRINTF : |%d| |%d|\n", INT_MAX + 1, INT_MIN - 1);
	// ft_printf("30) my       PRINTF : |%d| |%d|\n", INT_MAX + 1, INT_MIN - 1);
	// printf("31) standart PRINTF : |%.d|\n", 0);
	// ft_printf("31) my       PRINTF : |%.d|\n", 0);
	// printf("32) standart PRINTF : |%.d|\n", 100);
	// ft_printf("32) my       PRINTF : |%.d|\n", 100);


// }
// //########o#l#o#l#o############# THE END ########o#l#o#l#o#############
// //########o#l#o#l#o###############  UB ########o#l#o#l#o###############
// 	// printf("\t%d - real ptf\n\n", printf("%-06d", 1234));
// 	// printf("\t%d - real ptf\n\n", printf("%-0d", 1234));
// 	//printf("\t%d - real ptf\n\n", printf("%-*d", 0, 1234)); NOT UB!
// 	// printf("\t%d - real ptf\n\n", printf("%0-3d", 1234));
// 	// printf("\t%d - real ptf\n\n", printf("%6-d", 1234));



// // ########o#l#o#l#o###################### MIX ########o#l#o#l#o########################

// 	// n = ft_printf("f%d", 2147483649);
// 	// k = printf("\n\nf%ld\n", 2147483649);
// 	// printf("\n\t%d\t%d\n", n, k);
// //char
// 	// n = ft_printf("1 %c", 'e');
// 	// k = printf("\n\n1 %c\n", 'e');
// 	// printf("\n\t%d\t%d\n", n, k);
// //string
// 	// n = ft_printf("1 %s345%s6", "abcdef", "rr");
// 	// k = printf("\n\n1 %s345%s6\n", "abcdef", "rr");
// 	// printf("\n\t%d\t%d\n", n, k);
// //hex
// 	// n = ft_printf("1 %X34", 0001);
// 	// k = printf("\n\n1 %X34\n", 0001);
// 	// printf("\n\t%d\t%d\n", n, k);
// //multi
// 	// n = ft_printf("1 %s345%x6", "abcdef", 256);
// 	// k = printf("\n\n1 %s345%x6\n", "abcdef", 256);
// 	// printf("\n\t%d\t%d\n", n, k);



// 	return (0);
// }
