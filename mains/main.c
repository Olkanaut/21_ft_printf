#include "../includes/libftprintf.h"
#include <assert.h>
#include <string.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

//#include "./includes/libftprintf.h"
//#include "./src/libftprintf.h"

int		main(void)
{

	// printf("\t%d \n\n", ft_printf("|1|---------------%5d--|", 4));
	// printf("\t%d \n\n\n", printf("|1|---------------%5d--|", 4));

	// printf("\t%d \n\n", ft_printf("|1|%%--|"));
	// printf("\t%d \n\n\n", printf("|1|%%--|"));

	// printf("\t%d \n\n", ft_printf("|2|%5%--|"));
	// printf("\t%d \n\n\n", printf("|2|%5%--|"));

	// printf("\t%d \n\n", ft_printf("|3|%05%--|"));
	// printf("\t%d \n\n\n", printf("|3|%05%--|"));

	// printf("\t%d \n\n", ft_printf("|4|%-5%--|"));
	// printf("\t%d \n\n\n", printf("|4|%-5%--|"));

	// printf("\t%d \n\n", ft_printf("|5|%-05%--|"));
	// printf("\t%d \n\n\n", printf("|5|%-05%--|"));


	// printf("\t%d \n\n", ft_printf("|6|%.5%--|"));
	// printf("\t%d \n\n\n", printf("|6|%.5%--|"));

	// printf("\t%d \n\n", ft_printf("|7|%-.5%--|"));
	// printf("\t%d \n\n\n", printf("|7|%-.5%--|"));

	// printf("\t%d \n\n", ft_printf("|8|%03.5%--|"));
	// printf("\t%d \n\n\n", printf("|8|%03.5%--|"));

	// printf("\t%d \n\n", ft_printf("%03.5%--|"));
	// printf("\t%d \n\n\n", printf("%03.5%--|"));

	// printf("\t%d \n\n", ft_printf("|9|%3.5%--|"));
	// printf("\t%d \n\n\n", printf("|9|%3.5%--|"));

	// printf("\t%d \n\n", ft_printf("|10|%5.3%|"));
	// printf("\t%d \n\n", printf("|10|%5.3%|"));

	// ft_printf("|1|%%--|2|%5%--|3|%05%--|4|%-5%--|5|%-05%--|6|%.5%--|7|%-.5%--|8|%03.5%--|9|%3.5%--|10|%5.3%|\n");
	// printf("|1|%%--|2|%5%--|3|%05%--|4|%-5%--|5|%-05%--|6|%.5%--|7|%-.5%--|8|%03.5%--|9|%3.5%--|10|%5.3%|\n");

	// ft_printf("|%%--|%5%--|%05%--|%-5%--|%-05%--|%.5%--|%-.5%--|%03.5%--|%3.5%--|%5.3%|\n");
	// printf("|%%--|%5%--|%05%--|%-5%--|%-05%--|%.5%--|%-.5%--|%03.5%--|%3.5%--|%5.3%|\n");

// // ----------Test 469 : ----------

// 	printf("\t%d \n\n", ft_printf("%0*.*u|", 3, -1, 97));
// 	printf("\t%d \n\n\n", printf("%0*.*u|", 3, -1, 97));

// 	printf("\t%d \n\n", ft_printf("%0*.*u|", 2, -1, 97));
// 	printf("\t%d \n\n\n", printf("%0*.*u|", 2, -1, 97));

// 	printf("\t%d \n\n", ft_printf("%0*.*u|", 1, -1, 97));
// 	printf("\t%d \n\n\n", printf("%0*.*u|", 1, -1, 97));


// 	printf("\t%d \n\n", ft_printf("%0*.*u|", 4, -1, 7));
// 	printf("\t%d \n\n\n", printf("%0*.*u|", 4, -1, 7));

// 	printf("\t%d \n\n", ft_printf("%0*.*u|", 3, -1, 7));
// 	printf("\t%d \n\n\n", printf("%0*.*u|", 3, -1, 7));

// 	printf("\t%d \n\n", ft_printf("%0*.*u|", 2, -1, 7));
// 	printf("\t%d \n\n\n", printf("%0*.*u|", 2, -1, 7));

// 	printf("\t%d \n\n", ft_printf("%0*.*u|", 1, -1, 7));
// 	printf("\t%d \n\n\n", printf("%0*.*u|", 1, -1, 7));

// //%0*.*u, %0*.*x, %0*.*X,
// 	printf("\t%d \n\n", ft_printf("%0*.*X|", 4, -1, 61));
// 	printf("\t%d \n\n\n", printf("%0*.*X|", 4, -1, 61));

// 	printf("\t%d \n\n", ft_printf("%0*.*X|", 3, -1, 61));// 1st '*' = 3, 2nd '*' = -1
// 	printf("\t%d \n\n\n", printf("%0*.*X|", 3, -1, 61));

// 	printf("\t%d \n\n", ft_printf("%0*.*X|", 2, -1, 61));
// 	printf("\t%d \n\n\n", printf("%0*.*X|", 2, -1, 61));

// 	printf("\t%d \n\n", ft_printf("%0*.*X|", 1, -1, 61));
// 	printf("\t%d \n\n\n", printf("%0*.*X|", 1, -1, 61));

// ----------Test 451 : ----------
// "%0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X" // 1st '*' = 3, 2nd '*' = -1

// 1c1
// < 008, 008, 008, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 000, 000, 000, 4282621618, ff439eb2, FF439EB2, 0097, 0061, 0061, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 200
// ---
// > 008, 008, 008, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 000, 000, 000, 4282621618, ff439eb2, FF439EB2, 097, 061, 061, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 200





	// char	*n = "abcdefghijklmnop";
	// char	*o = "-a";
	// char	*p = "-12";
	// char	*q = "0";
	// char	*r = "%%";

	// printf("\t%d \n\n", ft_printf("%0*.*s, %0*.*s, %0*.*s, %0*.*s, %0*.*s", -3, -1, n, -3, -1, o, -3, -1, p, -3, -1, q, -3, -1, r));
	// printf("\t%d \n\n\n", printf("%0*.*s, %0*.*s, %0*.*s, %0*.*s, %0*.*s", -3, -1, n, -3, -1, o, -3, -1, p, -3, -1, q, -3, -1, r));

	// printf("\t%d \n\n", ft_printf("%*.*s", 1, 4, "0"));spaces in front - 309
	// printf("\t%d \n\n\n", printf("%*.*s", 1, 4, "0"));





	// printf("\t%d \n\n", ft_printf("%-*.*s|", -2, 4, "-a"));//268 //--
	// printf("\t%d \n\n\n", printf("%-*.*s|", -2, 4, "-a"));

	// printf("\t%d \n\n", ft_printf("%-*.*s|", 2, 4, "-a"));//268// - +
	// printf("\t%d \n\n\n", printf("%-*.*s|", 2, 4, "-a"));

	// printf("\t%d \n\n", ft_printf("%*.*s|", -2, 4, "-a"));//268 // + - 
	// printf("\t%d \n\n\n", printf("%*.*s|", -2, 4, "-a"));

	// printf("\t%d \n\n", ft_printf("%*.*s|", 2, 4, "-a"));//268 // ++
	// printf("\t%d \n\n\n", printf("%*.*s|", 2, 4, "-a"));


	// printf("\t%d \n\n", ft_printf("%-*.*s|", -3, 4, "-a"));//268 //--
	// printf("\t%d \n\n\n", printf("%-*.*s|", -3, 4, "-a"));

	// printf("\t%d \n\n", ft_printf("%-*.*s|", 3, 4, "-a"));//268// - +
	// printf("\t%d \n\n\n", printf("%-*.*s|", 3, 4, "-a"));

	// printf("\t%d \n\n", ft_printf("%*.*s|", -3, 4, "-a"));//268 // + - 
	// printf("\t%d \n\n\n", printf("%*.*s|", -3, 4, "-a"));

	// printf("\t%d \n\n", ft_printf("%*.*s|", 3, 4, "-a"));//268 // ++
	// printf("\t%d \n\n\n", printf("%*.*s|", 3, 4, "-a"));

// _______________________________________________
// _______________________________________________
// _______________________________________________
// _______________________________________________
// _______________________________________________
// // TESTS MAZOIZE : CHARS ALL WELL ! Test 500
	// printf("\t%d \n\n", ft_printf("%c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c|", 'a', 'a', '-',     12, '-',     12, '0',    12, '%',     12, 'a'));
	// printf("\t%d \n\n\n", printf("%c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c|", 'a', 'a', '-',     12, '-',     12, '0',    12, '%',     12, 'a'));


	// printf("\t%d \n\n", ft_printf("%*c|", 12, '-'));
	// printf("\t%d \n\n\n", printf("%*c|", 12, '-'));

	// printf("\t%d \n\n", ft_printf("%-*c|", 12, '0'));
	// printf("\t%d \n\n\n", printf("%-*c|", 12, '0'));

	// printf("\t%d \n\n", ft_printf("%*c|", 12, '%'));
	// printf("\t%d \n\n\n", printf("%*c|", 12, '%'));

	// printf("\t%d \n\n", ft_printf("%-*c|", 12, 'a'));
	// printf("\t%d \n\n\n", printf("%-*c|", 12, 'a'));

// ----------Test 500 : ----------
// "%c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c" // 1st '*' = 12, 2nd '*' = 18
// < a,    a,   -,   -,     0,    %,    a       --- Return : 22


// 1c1
// < a,  a, -, -,  0,  %, a --- Return : 22
// ---
// > a,  a, -, -           ,  0           ,  %           , a            --- Return : 66





// TESTS MAZOIZE : STRINGS ALL WELL ! 228 231 234

// // ----------Test 228 : ---------- everything's OK !!!!!
	// printf("\t%d \n\n", ft_printf("%*s|", -4, "-a"));//228 //--
	// printf("\t%d \n\n\n", printf("%*s|", -4, "-a"));

	// printf("\t%d \n\n", ft_printf("%*s|", -4, "-12"));//228 //--
	// printf("\t%d \n\n\n", printf("%*s|", -4, "-12"));

	// printf("\t%d \n\n", ft_printf("%*s|", -4, "%%"));//228 //--
	// printf("\t%d \n\n\n", printf("%*s|", -4, "%%"));

	// printf("\t%d \n\n", ft_printf("%*s|", -4, "0"));//228 //--
	// printf("\t%d \n\n\n", printf("%*s|", -4, "0"));

	// printf("\t%d \n\n", ft_printf("%*s|", -4, "-0"));//228 //--
	// printf("\t%d \n\n\n", printf("%*s|", -4, "-0"));

	// char	*n = "abcdefghijklmnop";
	// char	*o = "-a";
	// char	*p = "-12";
	// char	*q = "0";
	// char	*r = "%%";
	// char	*s = "-2147483648";
	// char	*t = "0x12345678";
	// char	*u = "-0";

	// printf("\t%d \n\n", ft_printf("%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s|", -4, n, -4, o, -4, p, -4, q, -4, r, -4, s, -4, t, -4, u));
	// printf("\t%d \n\n\n", printf("%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s|", -4, n, -4, o, -4, p, -4, q, -4, r, -4, s, -4, t, -4, u)); //228

	// printf("\t%d \n\n", ft_printf("%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s|", -3, n, -3, o, -3, p, -3, q, -3, r, -3, s, -3, t, -3, u));
	// printf("\t%d \n\n\n", printf("%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s|", -3, n, -3, o, -3, p, -3, q, -3, r, -3, s, -3, t, -3, u)); //231 

	// printf("\t%d \n\n", ft_printf("%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s|", -2, n, -2, o, -2, p, -2, q, -2, r, -2, s, -2, t, -2, u));
	// printf("\t%d \n\n\n", printf("%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s|", -2, n, -2, o, -2, p, -2, q, -2, r, -2, s, -2, t, -2, u)); //234

	// printf("\t%d \n\n", ft_printf("%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s|", -4, "abcdefghijklmnop", -4, "-a", -4, "-12", -4, "0", -4, "%%", -4, "-2147483648", -4, "0x12345678", -4, "-0"));//228 //--
	// printf("\t%d \n\n\n", printf("%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s|", -4, "abcdefghijklmnop", -4, "-a", -4, "-12", -4, "0", -4, "%%", -4, "-2147483648", -4, "0x12345678", -4, "-0"));

// ----------Test 228 : ----------
// "%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s" // 1st '*' = -4, 2nd '*' = 14

// 1c1
// < abcdefghijklmnop, -a, -12, 0, %%, -2147483648, 0x12345678, -0 --- Return : 61
// ---
// > abcdefghijklmnop, -a  , -12 , 0   , %%  , -2147483648, 0x12345678, -0   --- Return : 71



// // ----------Test 381 : ---------- ok now !
// // ----------Test 381 : ---------- ok now !
// 	// printf("\t%d \n\n", ft_printf("%*.*u, %*.*x, %*.*X,|" , -1, 0, 8, -1, 0, 8, -1, 0, 8));
// 	// printf("\t%d \n\n", printf("%*.*u, %*.*x, %*.*X,|" , -1, 0, 8, -1, 0, 8, -1, 0, 8));

// 	// // printf("\t%d \n\n", ft_printf("%*.*u|" , -1, 0, 4294967284));
// 	// // printf("\t%d \n\n", printf("%*.*lu|" , -1, 0, 4294967284));

// 	// printf("\t%d \n\n", ft_printf("%*.*u, %*.*x, %*.*X,|" , -1, 0, 4294967284, -1, 0, 4294967284, -1, 0, 4294967284));
// 	// printf("\t%d \n\n", printf("%*.*u, %*.*x, %*.*X,|" , -1, 0, 4294967284, -1, 0, 4294967284, -1, 0, 4294967284));

// 	// printf("\t%d \n\n", ft_printf("%*.*u, %*.*x, %*.*X|" , -1, 0, 123456789, -1, 0, 123456789, -1, 0, 123456789));
// 	// printf("\t%d \n\n", printf("%*.*u, %*.*x, %*.*X|" , -1, 0, 123456789, -1, 0, 123456789, -1, 0, 123456789));

// 	printf("\t%d \n\n", ft_printf("%*.*u, %*.*x, %*.*X|" , -1, 0, 0, -1, 0, 0, -1, 0, 0));
// 	printf("\t%d \n\n", printf("%*.*u, %*.*x, %*.*X|" , -1, 0, 0, -1, 0, 0, -1, 0, 0));
// // ----------Test 381 : ---------- ok now !
//  //"%*.*u, %*.*x, %*.*X,     %*.*u, %*.*x, %*.*X,      %*.*u, %*.*x, %*.*X,    %*.*u, %*.*x, %*.*X,         %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X" // 1st '*' = -1, 2nd '*' = 0

// // 1c1
// // < 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,  ,  ,  , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 179
// // ---
// // > 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,  ,  ,  , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 185
  




// // ----------Test 231 : ---------- everything's OK !!!!!
// 	printf("\t%d \n\n", ft_printf("%*s|", -3, "-a"));//228 //--
// 	printf("\t%d \n\n\n", printf("%*s|", -3, "-a"));

// 	printf("\t%d \n\n", ft_printf("%*s|", -3, "%%"));//228 //--
// 	printf("\t%d \n\n\n", printf("%*s|", -3, "%%"));

// 	printf("\t%d \n\n", ft_printf("%*s|", -3, "0"));//228 //--
// 	printf("\t%d \n\n\n", printf("%*s|", -3, "0"));

// 	printf("\t%d \n\n", ft_printf("%*s|", -3, "-0"));//228 //--
// 	printf("\t%d \n\n\n", printf("%*s|", -3, "-0"));

// // ----------Test 231 : ----------
// // "%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s" // 1st '*' = -3, 2nd '*' = 14

// // 1c1
// // < abcdefghijklmnop, -a, -12, 0, %%, -2147483648, 0x12345678, -0 --- Return : 61
// // ---
// // > abcdefghijklmnop, -a , -12, 0  , %% , -2147483648, 0x12345678, -0  --- Return : 66


// // ----------Test 234 : ---------- everything's OK !!!!!
// 	printf("\t%d \n\n", ft_printf("%*s|", -2, "0"));//228 //--
// 	printf("\t%d \n\n\n", printf("%*s|", -2, "0"));


// // ----------Test 234 : ----------
// // "%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s" // 1st '*' = -2, 2nd '*' = 14

// // 1c1
// // < abcdefghijklmnop, -a, -12, 0, %%, -2147483648, 0x12345678, -0 --- Return : 61
// // ---
// // > abcdefghijklmnop, -a, -12, 0 , %%, -2147483648, 0x12345678, -0 --- Return : 62
// _______________________________________________
// _______________________________________________
// _______________________________________________
// _______________________________________________
// _______________________________________________





// ----------Test 451 : ---------- PASSED : NOW OK !!!
// ----------_________________________________________
	// printf("\t%d \n\n", ft_printf("%0*.*u|", 6, -1, 97));
	// printf("\t%d \n\n\n", printf("%0*.*u|", 6, -1, 97));

	// printf("\t%d \n\n", ft_printf("%0*.*u|", 3, -1, 97));
	// printf("\t%d \n\n\n", printf("%0*.*u|", 3, -1, 97));

	// printf("\t%d \n\n", ft_printf("%0*.*u|", 2, -1, 97));
	// printf("\t%d \n\n\n", printf("%0*.*u|", 2, -1, 97));

	// printf("\t%d \n\n", ft_printf("%0*.*u|", 1, -1, 97));
	// printf("\t%d \n\n\n", printf("%0*.*u|", 1, -1, 97));

	// printf("\n___________\n");

	// printf("\t%d \n\n", ft_printf("%0*.*u|", 6, -1, 7));
	// printf("\t%d \n\n\n", printf("%0*.*u|", 6, -1, 7));

	// printf("\t%d \n\n", ft_printf("%0*.*u|", 3, -1, 7));
	// printf("\t%d \n\n\n", printf("%0*.*u|", 3, -1, 7));

	// printf("\t%d \n\n", ft_printf("%0*.*u|", 2, -1, 7));
	// printf("\t%d \n\n\n", printf("%0*.*u|", 2, -1, 7));

	// printf("\t%d \n\n", ft_printf("%0*.*u|", 1, -1, 7));
	// printf("\t%d \n\n\n", printf("%0*.*u|", 1, -1, 7));
	
	// printf("\t%d \n\n", ft_printf("%0*.*u, %0*.*x, %0*.*X|", 3, -1, 97, 3, -1, 97, 3, -1, 97));
	// printf("\t%d \n\n\n", printf("%0*.*u, %0*.*x, %0*.*X|", 3, -1, 97, 3, -1, 97, 3, -1, 97));

	// printf("\t%d \n\n", ft_printf("%0*.*u, %0*.*x, %0*.*X|", 4, -1, 97, 4, -1, 97, 4, -1, 97));
	// printf("\t%d \n\n\n", printf("%0*.*u, %0*.*x, %0*.*X|", 4, -1, 97, 4, -1, 97, 4, -1, 97));

// ----------Test 451 : ----------
// "%0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X" // 1st '*' = 3, 2nd '*' = -1

// 1c1
// < 008, 008, 008, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 000, 000, 000, 4282621618, ff439eb2, FF439EB2, 0097, 0061, 0061, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 200
// ---
// > 008, 008, 008, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 000, 000, 000, 4282621618, ff439eb2, FF439EB2, 097, 061, 061, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 200

	// printf("\t%d \n\n", ft_printf("%0*.*u|", 5, -1, 97));
	// printf("\t%d \n\n\n", printf("%0*.*u|", 5, -1, 97));








// ----------Test 309 : ---------- spaces in front
// "%*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s" // 1st '*' = 1, 2nd '*' = 4

// 1c1
// < abcd, -a, -12,    0, %%, -214, 0x12, -0 --- Return : 36
// ---
// > abcd, -a, -12, 0, %%, -214, 0x12, -0 --- Return : 36

// ----------Test 268 : ----------
// "%-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s" // 1st '*' = -2, 2nd '*' = 4

// 1c1
// < abcd, -a  , -12, 0 , %%  , -214, 0x12, -0   --- Return : 37
// ---
// > abcd, -a, -12, 0 , %%, -214, 0x12, -0 --- Return : 37

// ----------Test 228 : ----------
// "%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s" // 1st '*' = -4, 2nd '*' = 14

// 1c1
// < abcdefghijklmnop, -a, -12, 0, %%, -2147483648, 0x12345678, -0 --- Return : 61
// ---
// > abcdefghijklmnop, -a  , -12 , 0   , %%  , -2147483648, 0x12345678, -0   --- Return : 71

// ----------Test 322 : ----------
// "%-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s" // 1st '*' = 2, 2nd '*' = 3

// 1c1
// < abc, -a , -12, 0 , %% , -21, 0x1, -0  --- Return : 34
// ---
// > abc, -a, -12, 0 , %%, -21, 0x1, -0 --- Return : 34

// 	PRINT(" --- Return : %d\n", PRINT("%1s, %1s, %1s, %1s, %1s", n, o, p, q, r)); //T180

// 	----------Test 180 : ----------
// "%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d" // 1st '*' = 3, 2nd '*' = -1

// 1c1
// <   8, -12, 123456789,   0, -12345678,  97, -2147483648, 2147483647 --- Return : 65
// ---
// > 008, -12, 123456789, 000, -12345678, 097, -2147483648, 2147483647 --- Return : 65



// 	printf("\t%d \n\n", ft_printf("%X"));
// 	printf("\t%d \n\n\n", printf("%05"));
// 	----------Test 353 : ----------
// "%u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X" // 1st '*' = 5, 2nd '*' = 5

// 1c1
// < 8, 8, 8, 4294967284, fffffff4, 1FFFFFFF4, 4418424085, 1075bcd15, 1075BCD15, 4294967296, 100000000, 100000000, 140733181042354, 1ff439eb2, 1FF439EB2, 4294967393, 61, 100000061, 2147483647, 7fffffff, 17FFFFFFF, 2147483648, 80000000, 180000000 --- Return : 240
// ---
// > 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 0, 0, 0, 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 185


// ---------------_______ not ok _______--------------
// ---------------_______pft-2019_______--------------

// ---------------_______13_NO SEGFAULT!!!______--------------
	// printf("\t%d \n\n", ft_printf("%05"));
	// printf("\t%d \n\n\n", printf("%05"));

// Test  13 (nocrash_nullspec_5wzp) : FAILED.
//     (nocrash test: automatically passes provided no unexpected failure)
//     First line of code: {return test("%05");}
//     SEGFAULT

	// printf("\t%d \n\n", ft_printf("%%"));
	// printf("\t%d \n\n\n", printf("%%"));

	// printf("\t%d \n\n", ft_printf("%05|", NULL));
	// printf("\t%d \n\n\n", printf("%05|", NULL));

// ---------------_______431_STRANGE!!!______--------------
	printf("\t%d \n\n", ft_printf("%2.p|", NULL));
	printf("\t%d \n\n\n", printf("%2.p|", NULL));

	printf("\t%d \n\n", ft_printf("bla%2.p|", NULL));
	printf("\t%d \n\n\n", printf("bla%2.p|", NULL));

	printf("\t%d \n\n", ft_printf("%3.p|", NULL));
	printf("\t%d \n\n\n", printf("%3.p|", NULL));

	printf("\t%d \n\n", ft_printf("%7.p|", NULL));
	printf("\t%d \n\n\n", printf("%7.p|", NULL));

	printf("\t%d \n\n", ft_printf("%2p|", NULL));
	printf("\t%d \n\n\n", printf("%2p|", NULL));

	// printf("\t%d \n\n", ft_printf("%2.0p|", NULL));
	// printf("\t%d \n\n\n", printf("%2.0p|", NULL));

// int p_void_width_nofit(void){return test("%2.p", NULL);}
// Test 431 (p_void_width_nofit) : FAILED.
//     First line of code: {return test("%2.p", NULL);}
//       expected return value : 2
//       your return value     : 2
//       expected output : "0x"
//       your output     : " 0x"
//       expected (nonprintable as hex) : "0x"
//       actual   (nonprintable as hex) : " 0x"



// ---------------_______736_STRANGE!!!______--------------
// Test 736 (new2019_negstar_1) : FAILED.
//     First line of code: {return test("%*s", -32, "abc");}
//       expected return value : 35
//       your return value     : 3
//       expected output : "abc                             "
//       your output     : "abc"
//       expected (nonprintable as hex) : "abc                             "
//       actual   (nonprintable as hex) : "abc"



// ---------------_______ not ok _______--------------
// ---------------_______pft_______--------------

// ---------------_______489_STRANGE!!!______--------------
// 	printf("\t%d \n\n", ft_printf("%*s|", -32, "abc"));
// 	printf("\t%d \n\n\n", printf("%*s|", -32, "abc"));

// // Test 489 (new2019_negstar_1) : FAILED.
// //     First line of code: {return test("%*s", -32, "abc");}
// //       expected output : "abc                             "
// //       your output     : "abc"
// //       expected (nonprintable as hex) : "abc                             "
// //       actual   (nonprintable as hex) : "abc"

// ---------------_______647 (space : is not required)_______--------------
	// printf("\t%d \n\n", ft_printf("%% *.5i 42 == |% *.5i|\n", 4, 42));
	// printf("\t%d \n\n\n", printf("%% *.5i 42 == |% *.5i|\n", 4, 42));

// int moul_star_2(void){return test("%% *.5i 42 == |% *.5i|\n", 4, 42);}
// Test 647 (moul_star_2) : FAILED.
//     First line of code: {return test("%% *.5i 42 == |% *.5i|
// ", 4, 42);}
//       expected output : "% *.5i 42 == | 00042|
// "
//       your output     : "% *.5i 42 == |"
//       expected (nonprintable as hex) : "% *.5i 42 == | 00042|\x0a"
//       actual   (nonprintable as hex) : "% *.5i 42 == |"


// ---------------_______ TO CHECK_______--------------
// ---------------_______moulitest_______--------------
// // 	printf("%");
// // 	printf("{%*3d}", 5, 0)

	// printf("\t%d \n\n", ft_printf("%x", -42));
	// printf("\t%d \n\n\n", printf("%x", -42));

	// printf("\t%d \n\n", ft_printf("%x", 42));
	// printf("\t%d \n\n\n", printf("%x", 42));

// // # 0016 (int)
// //   ft_printf("%x", -42);
// //   1. (   16) -->ffffffffffffffd6<--
// //   2. (    8) -->ffffffd6<--

// 	printf("\t%d \n\n", ft_printf("%X", -42));
// 	printf("\t%d \n\n\n", printf("%X", -42));

// 	printf("\t%d \n\n", ft_printf("%X", 42));
// 	printf("\t%d \n\n\n", printf("%X", 42));

// // # 0017 (int)
// //   ft_printf("%X", -42);
// //   1. (   16) -->FFFFFFFFFFFFFFD6<--
// //   2. (    8) -->FFFFFFD6<--

// 	printf("\t%d \n\n", ft_printf("%x", 4294967296)); //warning: format specifies type 'unsigned int' but the argument has type 'long' [-Wformat]
// 	printf("\t%d \n\n\n", printf("%x", 4294967296));

// // # 0018 (int)
// //   ft_printf("%x", 4294967296);
// //   1. (    9) -->100000000<--
// //   2. (    1) -->0<--

// // # 0019 (int)
// //   ft_printf("%X", 4294967296);
// //   1. (    9) -->100000000<--
// //   2. (    1) -->0<--


// 	printf("\t%d \n\n", ft_printf("%u|", -1)); 
// 	printf("\t%d \n\n\n", printf("%u|", -1));
// //   # 0169 (unsigned int)
// //   ft_printf("%u", -1);
// //   1. (   20) -->18446744073709551615<--
// //   2. (   10) -->4294967295<--

// 	printf("\t%d \n\n", ft_printf("%u", 4294967296)); 
// 	printf("\t%d \n\n\n", printf("%u", 4294967296));//format specifies type 'unsigned int' but the argument has type 'long' [-Wformat]

// // # 0171 (unsigned int)
// //   ft_printf("%u", 4294967296);
// //   1. (   10) -->4294967296<--
// //   2. (    1) -->0<--

// // Test 489 (new2019_negstar_1) : FAILED.
// //     First line of code: {return test("%*s", -32, "abc");}
// //       expected output : "abc                             "
// //       your output     : "abc"
// //       expected (nonprintable as hex) : "abc                             "
// //       actual   (nonprintable as hex) : "abc"



// 	  > "%u|%-u|%0u", ULONG_MAX, ULONG_MAX, ULONG_MAX: [KO]
//   > "%1u|%-1u|%01u", ULONG_MAX, ULONG_MAX, ULONG_MAX: [KO]
//   > "%23u|%-23u|%023u", ULONG_MAX, ULONG_MAX, ULONG_MAX: [KO]
//   > "%.u|%-.u|%0.u", ULONG_MAX, ULONG_MAX, ULONG_MAX: [KO]
//   > "%.5u|%-.5u|%0.5u", ULONG_MAX, ULONG_MAX, ULONG_MAX: [KO]
//   > "%1.u|%-1.u|%01.u", ULONG_MAX, ULONG_MAX, ULONG_MAX: [KO]
//   > "%23.u|%-23.u|%023.u", ULONG_MAX, ULONG_MAX, ULONG_MAX: [KO]
//   > "%1.5u|%-1.5u|%01.5u", ULONG_MAX, ULONG_MAX, ULONG_MAX: [KO]
//   > "%23.5u|%-23.5u|%023.5u", ULONG_MAX, ULONG_MAX, ULONG_MAX: [KO]
//   > "%-0u", ULONG_MAX: [KO]
//   > "%-01u", ULONG_MAX: [KO]
//   > "%-023u", ULONG_MAX: [KO]
//   > "%-0.u", ULONG_MAX: [KO]
//   > "%-0.5u", ULONG_MAX: [KO]
//   > "%-01.u", ULONG_MAX: [KO]
//   > "%-01.5u", ULONG_MAX: [KO]
//   > "%-023.u", ULONG_MAX: [KO]
//   > "%-023.5u", ULONG_MAX: [KO]
//   > "%u|%-u|%0u", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX: [KO]
//   > "%1u|%-1u|%01u", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX: [KO]
//   > "%23u|%-23u|%023u", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX: [KO]
//   > "%.u|%-.u|%0.u", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX: [KO]
//   > "%.5u|%-.5u|%0.5u", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX: [KO]
//   > "%1.u|%-1.u|%01.u", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX: [KO]
//   > "%23.u|%-23.u|%023.u", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX: [KO]
//   > "%1.5u|%-1.5u|%01.5u", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX: [KO]
//   > "%23.5u|%-23.5u|%023.5u", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX: [KO]
//   > "%-0u", ULLONG_MAX: [KO]
//   > "%-01u", ULLONG_MAX: [KO]
//   > "%-023u", ULLONG_MAX: [KO]
//   > "%-0.u", ULLONG_MAX: [KO]
//   > "%-0.5u", ULLONG_MAX: [KO]
//   > "%-01.u", ULLONG_MAX: [KO]
//   > "%-01.5u", ULLONG_MAX: [KO]
//   > "%-023.u", ULLONG_MAX: [KO]
//   > "%-023.5u", ULLONG_MAX: [KO]
// ---------------_______ TO CHECK_______--------------
// ---------------_______moulitest_______--------------




	// int sig = 4;
	// int n = 0;
	// int k = 3;

	// n = (sig) ? n : (unsigned int)n;
	// k = (sig) ? k : (unsigned int)k;

	// printf("%d\n", n);
	// printf("%u\n", n);

	// printf("%d\n", k);
	// printf("%u\n", k);
	// printf("\t%d \n\n", ft_printf("%.01s|", "\0"));
	// printf("\t%d \n\n\n", printf("%.01s|", "\0"));

	// printf("\t%d \n\n", ft_printf("%.3s|", "\0"));
	// printf("\t%d \n\n\n", printf("%.3s|", "\0"));

	// printf("\t%d \n\n", ft_printf("%.03s|", "\0"));
	// printf("\t%d \n\n\n", printf("%.03s|", "\0"));


	// printf("\t%d \n\n", ft_printf("%.3s|", NULL));
	// printf("\t%d \n\n\n", printf("%.3s|", NULL));

	// printf("\t%d \n\n", ft_printf("%.03s|", NULL));
	// printf("\t%d \n\n\n", printf("%.03s|", NULL));

// 	printf("\t%d \n\n", ft_printf("%.0s|", "\0"));
// 	printf("\t%d \n\n\n", printf("%.0s|", "\0"));

// 	printf("\t%d \n\n", ft_printf("%.09s|", "\0"));
// 	printf("\t%d \n\n\n", printf("%.09s|", "\0"));

// int s_prec_01_no_width_s_nullchar(void){return test("%.01s", "\0");}
// int s_prec_03_no_width_s_nullchar(void){return test("%.03s", "\0");}
// int s_prec_09_no_width_s_nullchar(void){return test("%.09s", "\0");}

// Test  82 (s_prec_01_no_width_s_nullchar) : FAILED.
//     First line of code: {return test("%.01s", "
//       expected return value : 0
//       your return value     : 0
//       expected output : ""
//       your output     : " "
//       expected (nonprintable as hex) : ""
//       actual   (nonprintable as hex) : " "

// Test  83 (s_prec_03_no_width_s_nullchar) : FAILED.
//     First line of code: {return test("%.03s", "
//       expected return value : 0
//       your return value     : 0
//       expected output : ""
//       your output     : "   "
//       expected (nonprintable as hex) : ""
//       actual   (nonprintable as hex) : "   "

// Test  84 (s_prec_09_no_width_s_nullchar) : FAILED.
//     First line of code: {return test("%.09s", "
//       expected return value : 0
//       your return value     : 0
//       expected output : ""
//       your output     : "         "
//       expected (nonprintable as hex) : ""
//       actual   (nonprintable as hex) : "         "


// int s_prec_01_no_width_s_nullchar(void){return test("%.01s", "\0");}
// int s_prec_03_no_width_s_nullchar(void){return test("%.03s", "\0");}
// int s_prec_09_no_width_s_nullchar(void){return test("%.09s", "\0");}

// Test  94 (s_prec_01_no_width_s_nullchar) : FAILED.
//     First line of code: {return test("%.01s", '')
//       expected output : ""
//       your output     : " "
//       expected (nonprintable as hex) : ""
//       actual   (nonprintable as hex) : " "

// Test  95 (s_prec_03_no_width_s_nullchar) : FAILED.
//     First line of code: {return test("%.03s", "
//       expected output : ""
//       your output     : "   "
//       expected (nonprintable as hex) : ""
//       actual   (nonprintable as hex) : "   "

// Test  96 (s_prec_09_no_width_s_nullchar) : FAILED.
//     First line of code: {return test("%.09s", "
//       expected output : ""
//       your output     : "         "
//       expected (nonprintable as hex) : ""
//       actual   (nonprintable as hex) : "         "



// ---------------_______XZ_______--------------	  
	// printf("\t%d \n\n", ft_printf("%*s|", -32, "abc"));
	// printf("\t%d \n\n\n", printf("%*s|", -32, "abc"));

// Test 489 (new2019_negstar_1) : FAILED.
//     First line of code: {return test("%*s", -32, "abc");}
//       expected output : "abc                             "
//       your output     : "abc"
//       expected (nonprintable as hex) : "abc                             "
//       actual   (nonprintable as hex) : "abc"

// ---------------_______space: do not need to convert_______--------------



// ---------------_______space: do not need to convert_______--------------
	// printf("\t%d \n\n", ft_printf("%% *.5i 42 == |% *.5i|", 4, 42));
	// printf("\t%d \n\n\n", printf("%% *.5i 42 == |% *.5i|", 4, 42));

// 	Test 647 (moul_star_2) : FAILED.
//     First line of code: {return test("%% *.5i 42 == |% *.5i|", 4, 42);}
//       expected output : "% *.5i 42 == | 00042|
// "
//       your output     : "% *.5i 42 == |"
//       expected (nonprintable as hex) : "% *.5i 42 == | 00042|\x0a"
//       actual   (nonprintable as hex) : "% *.5i 42 == |"
// ---------------_______too many lines_______--------------


// ---------------_______too many lines_______--------------
	// printf("\t%d \n\n", ft_printf("%5.0x|", 0));
	// printf("\t%d \n\n\n", printf("%5.0x|", 0));

// 	Test 377 (x_prec0val0_w) : FAILED.
//     First line of code: {return test("%5.0x", 0);}
//       expected return value : 5
//       your return value     : 0
//       expected output : "     "
//       your output     : ""
//       expected (nonprintable as hex) : "     "
//       actual   (nonprintable as hex) : ""

// Test 378 (x_prec0val0_w_impl) : FAILED.
//     First line of code: {return test("%5.x", 0);}
//       expected return value : 5
//       your return value     : 0
//       expected output : "     "
//       your output     : ""
//       expected (nonprintable as hex) : "     "
//       actual   (nonprintable as hex) : ""

// Test 379 (x_prec0val0_wlj) : FAILED.
//     First line of code: {return test("%-5.0x", 0);}
//       expected return value : 5
//       your return value     : 0
//       expected output : "     "
//       your output     : ""
//       expected (nonprintable as hex) : "     "
//       actual   (nonprintable as hex) : ""

// Test 380 (x_prec0val0_wlj_impl) : FAILED.
//     First line of code: {return test("%-5.x", 0);}
//       expected return value : 5
//       your return value     : 0
//       expected output : "     "
//       your output     : ""
//       expected (nonprintable as hex) : "     "
//       actual   (nonprintable as hex) : ""


// ---------------_______too many lines_______--------------
	// printf("\t%d \n\n", ft_printf("%5.0d|", 0));
	// printf("\t%d \n\n\n", printf("%5.0d|", 0));

// Test 287 (d_prec0val0_w) : FAILED.
//     First line of code: {return test("%5.0d", 0);}
//       expected return value : 5
//       your return value     : 0
//       expected output : "     "
//       your output     : ""
//       expected (nonprintable as hex) : "     "
//       actual   (nonprintable as hex) : ""

// Test 288 (d_prec0val0_w_impl) : FAILED.
//     First line of code: {return test("%5.d", 0);}
//       expected return value : 5
//       your return value     : 0
//       expected output : "     "
//       your output     : ""
//       expected (nonprintable as hex) : "     "
//       actual   (nonprintable as hex) : ""

// Test 289 (d_prec0val0_wlj) : FAILED.
//     First line of code: {return test("%-5.0d", 0);}
//       expected return value : 5
//       your return value     : 0
//       expected output : "     "
//       your output     : ""
//       expected (nonprintable as hex) : "     "
//       actual   (nonprintable as hex) : ""

// Test 290 (d_prec0val0_wlj_impl) : FAILED.
//     First line of code: {return test("%-5.d", 0);}
//       expected return value : 5
//       your return value     : 0
//       expected output : "     "
//       your output     : ""
//       expected (nonprintable as hex) : "     "
//       actual   (nonprintable as hex) : ""
// ---------------______________--------------


// ---------------_______ok_______--------------
	// printf("\t%d \n\n", ft_printf("%*i|", -14, 94827));
	// printf("\t%d \n\n\n", printf("%*i|", -14, 94827));

	// printf("\t%d \n\n", ft_printf("%-14i|", 94827));
	// printf("\t%d \n\n\n", printf("%-14i|", 94827));

	// printf("\t%d \n\n", ft_printf("%0*i|", -7, -54));
	// printf("\t%d \n\n\n", printf("%0*i|", -7, -54));

// Test 742 (new2019_negstar_7) : FAILED.
//     First line of code: {return test("%*i", -14, 94827);}
//       expected return value : 15
//       your return value     : 5
//       expected output : "94827         "
//       your output     : "94827"
//       expected (nonprintable as hex) : "94827         "
//       actual   (nonprintable as hex) : "94827"

// Test 744 (new2019_negstar_9) : FAILED.
//     First line of code: {return test("%0*i", -7, -54);}
//       expected return value : 7
//       your return value     : 3
//       expected output : "-54    "
//       your output     : "-54"
//       expected (nonprintable as hex) : "-54    "
//       actual   (nonprintable as hex) : "-54"
// ---------------______________--------------


// ---------------______________--------------
	// printf("\t%d \n\n", ft_printf("%*s", -32, "abc"));
	// printf("\t%d \n\n\n", printf("%*s", -32, "abc"));

	// printf("\t%d \n\n", ft_printf("%-*.*s|", -7, -3, "yolo"));
	// printf("\t%d \n\n\n", printf("%-*.*s|", -7, -3, "yolo"));




// Test 736 (new2019_negstar_1) : FAILED.
//     First line of code: {return test("%*s", -32, "abc");}
//       expected return value : 35
//       your return value     : 3
//       expected output : "abc                             "
//       your output     : "abc"
//       expected (nonprintable as hex) : "abc                             "
//       actual   (nonprintable as hex) : "abc"

// Test 740 (new2019_negstar_5) : FAILED.
//     First line of code: {return test("%-*.*s", -7, -3, "yolo");}
//       expected return value : 7
//       your return value     : 4
//       expected output : "yolo   "
//       your output     : "yolo"
//       expected (nonprintable as hex) : "yolo   "
//       actual   (nonprintable as hex) : "yolo"
// ---------------______________--------------


// 	int new2019_negstar_1(void){return test("%*s", -32, "abc");}//neok
// int new2019_negstar_2(void){return test("%-*s", -32, "abc");}//neok
// int new2019_negstar_3(void){return test("%*s", -3, "hello");}//ok
// int new2019_negstar_4(void){return test("%.*s", -3, "hello");}//ok
// int new2019_negstar_5(void){return test("%-*.*s", -7, -3, "yolo");}//neok
// int new2019_negstar_6(void){return test("%*i", -4, 94827);}//ok
// int new2019_negstar_7(void){return test("%*i", -14, 94827);}//neok
// int new2019_negstar_8(void){return test("%.*i", -6, -3);}//ok
// int new2019_negstar_9(void){return test("%0*i", -7, -54);}//neok





	//int		nocrash_nullspec_5wzp(void){return test("%05");}
	// printf("|\t%d|\n", ft_printf("%05"));//ko
	// printf("|\t%d|\n", printf("%05"));

	// printf("\t%d \n\n", ft_printf("%p|", NULL));
	// printf("\t%d \n\n\n", printf("%p|", NULL));

	// printf("\t%d \n\n", ft_printf("%5p|", NULL));
	// printf("\t%d \n\n\n", printf("%5p|", NULL));

	// printf("\t%d \n\n", ft_printf("%3p|", NULL)); //ok
	// printf("\t%d \n\n\n", printf("%3p|", NULL));

	// printf("\t%d \n\n", ft_printf("%2p|", NULL)); //ok
	// printf("\t%d \n\n\n", printf("%2p|", NULL));

	// printf("\t%d \n\n", ft_printf("%9.p|", NULL));
	// printf("\t%d \n\n\n", printf("%9.p|", NULL));

	// printf("\t%d \n\n", ft_printf("%5.p|", NULL));
	// printf("\t%d \n\n\n", printf("%5.p|", NULL));

	// printf("\t%d \n\n", ft_printf("%3.p|", NULL));
	// printf("\t%d \n\n\n", printf("%3.p|", NULL));

	// printf("\t%d \n\n", ft_printf("%2.p|", NULL));
	// printf("\t%d \n\n\n", printf("%2.p|", NULL));

	// printf("\t%d \n\n", ft_printf("%1.p|", NULL));
	// printf("\t%d \n\n\n", printf("%1.p|", NULL));

	// printf("\t%d \n\n", ft_printf("%2p|", NULL));
	// printf("\t%d \n\n\n", printf("%2p|", NULL));

	// printf("\t%d \n\n", ft_printf("%.p|", NULL));
	// printf("\t%d \n\n\n", printf("%.p|", NULL));

	// printf("\t%d \n\n\n", ft_printf("%-30p|", "Random string"));//ok
	// printf("\t%d \n\n\n", printf("%-30p|", "Random string"));//ok

	// static char	a01;
	// static unsigned char a02;
	// static short a03;
	// static unsigned short a04;
	// static int a05;
	// static unsigned int a06;
	// static long a07;
	// static unsigned long a08;
	// static long long a09;
	// static unsigned long long a10;
	// static char *a11;
	// static void *a12;

	// printf("\t%d \n\n\n", ft_printf("%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p", &a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12));//ok
	// printf("\t%d \n\n\n", printf("%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p", &a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12));//ok

	// printf("\t%d \n\n\n", ft_printf("%-30p|", "Random string"));//ok
	// printf("\t%d \n\n\n", printf("%-30p|", "Random string"));//ok

	// printf("\t%d \n\n\n", ft_printf("%-30p|", "Random string"));//ok
	// printf("\t%d \n\n\n", printf("%-30p|", "Random string"));//ok

// int p_width_nofit_lj(void){return test("%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}
// int p_width_16_lj(void){return test("%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}//ok
// int p_width_8_lj(void){return test("%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

	// printf("\t%d \n\n", ft_printf("%2.p|", NULL));
	// printf("\t%d \n\n\n", printf("%2.p|", NULL));

// int p_null(void){return test("%p", NULL);}
// int p_null_width_fit(void){return test("%5p", NULL);}
// int p_null_width_nofit(void){return test("%2p", NULL);}

// int p_void(void){return test("%.p", NULL);}
// int p_void_width_fit(void){return test("%5.p", NULL);}
// int p_void_width_nofit(void){return test("%2.p", NULL);}



// int p_width_fit_lj(void){return test("%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

// int p_width_16_lj(void){return test("%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

// int p_width_32_lj(void){return test("%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

	// static char *s_hidden = "hi low\0don't print me lol\0";

	// printf("\t%d \n\n", ft_printf("%-03s|", s_hidden));
	// printf("\t%d \n\n", printf("%-03s|", s_hidden));

	// printf("\t%d \n\n", ft_printf("%-09s|", s_hidden));
	// printf("\t%d \n\n", printf("%-09s|", s_hidden));

//  int notrequired_s_undefbehav_lj_0_width_3(void){return test("%-03s", s_hidden);}
//  int notrequired_s_undefbehav_lj_0_width_9(void){return test("%-09s", s_hidden);}


	// printf("\t%d \n\n", ft_printf("%09s", s_hidden));

	// printf("\t%d \n\n", printf("%09s", s_hidden));



	// printf("\t%d \n\n", ft_printf("%.00s", "\0"));
	// printf("\t%d \n\n", ft_printf("%.01s", "\0"));
	// printf("\t%d \n\n", ft_printf("%.03s|", "\0"));
	// printf("\t%d \n\n", ft_printf("%.09s|", "\0"));

	// printf("\t%d \n\n", printf("%.00s", "\0"));
	// printf("\t%d \n\n", printf("%.01s", "\0"));
	// printf("\t%d \n\n", printf("%.03s|", "\0"));
	// printf("\t%d \n\n", printf("%.09s|", "\0"));

// int s_prec_00_no_width_s_nullchar(void){return test("%.00s", "\0");}
// int s_prec_01_no_width_s_nullchar(void){return test("%.01s", "\0");}
// int s_prec_03_no_width_s_nullchar(void){return test("%.03s", "\0");}
// int s_prec_09_no_width_s_nullchar(void){return test("%.09s", "\0");}

	// printf("\t%d \n\n", ft_printf("%%"));
	// printf("\t%d \n\n", ft_printf("%8%"));
	// printf("\t%d \n\n", ft_printf("%-8%"));
	// printf("\t%d \n\n", ft_printf("%08%"));
	// printf("\t%d \n\n\n", ft_printf("%-08%"));

	// printf("\t%d \n\n", printf("%%"));
	// printf("\t%d - real ptf\n\n", printf("%8%"));
	// printf("\t%d - real ptf\n\n", printf("%-8%"));
	// printf("\t%d - real ptf\n\n", printf("%08%"));
	// printf("\t%d - real ptf\n\n", printf("%-08%"));

//  int notrequired_s_undefbehav_0_width_9(void){return test("%09s", s_hidden);}


// 	printf("\t%d \n\n", ft_printf("hello, %s.", NULL));
// 	printf("\t%d \n\n", ft_printf("%s", NULL));
// 	printf("\t%d \n\n", ft_printf("%32s", NULL));
// 	printf("\t%d \n\n", ft_printf("%2s", NULL));
// 	printf("\t%d \n\n\n", ft_printf("%-32s", NULL));

// 	printf("\t%d \n\n", printf("hello, %s.", NULL));
// 	printf("\t%d - real ptf\n\n", printf("%s", NULL));
// 	printf("\t%d - real ptf\n\n", printf("%32s", NULL));
// 	printf("\t%d - real ptf\n\n", printf("%2s", NULL));
// 	printf("\t%d - real ptf\n\n", printf("%-32s", NULL));

// int s_null_basic_string_expansion(void){return test("hello, %s.", NULL);}
// int s_null_only_string_expansion(void){return test("%s", NULL);}
// int s_null_space_padded_field_width(void){return test("%32s", NULL);}
// int s_null_space_padded_over_field_width(void){return test("%2s", NULL);}
// int s_null_space_padded_field_width_lj(void){return test("%-32s", NULL);}
// int s_null_space_padded_field_width2_lj(void){return test("%-16s", NULL);}
// int s_null_space_padded_over_field_width_lj(void){return test("%-3s", NULL);}

	// printf("%d - real ptf\n\n", printf("%3.s", NULL));
	// printf("%d - real ptf\n\n", ft_printf("%3.s", NULL));

}
	// printf("\t%d - real ptf\n\n", printf("%-5%"));
	// printf("\t%d - real ptf\n\n", printf("%05%"));
	// printf("\t%d - real ptf\n\n\n", printf("%-05%"));

	// printf("\t%d", printf("%"));
	// printf("\t%d - real ptf\n\n", printf("%5"));
	// printf("\t%d - real ptf\n\n", printf("%05"));
	// printf("\t%d - real ptf\n\n", printf("%-05"));
	// printf("\t%d - real ptf\n\n", printf("%-5"));




	//printf("\t%d\n", ft_printf("%0*d|\t", 13, 1234));
	//printf("\t%d - real ptf\n\n", printf("%0*d|\t", 13, 1234));

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




// printf("%s", "######################		POINTERS	######################");
// printf("%s", "######################			PART 1");

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

// printf("\n\n%s\n", "######################			02 NEGATIVE PRECISION");
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

// printf("%s", "######################		x	X	u	######################");
// printf("%s", "######################			x		");
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






// // 	ft_printf("--------------------%%u--------------------\n");
// // 	printf("01) standart PRINTF : |%u|\n", 34);
// // 	ft_printf("01) my       PRINTF : |%u|\n", 34);
// // 	printf("02) standart PRINTF : |%u|\n", -34);
// // 	ft_printf("02) my       PRINTF : |%u|\n", -34);
// // 	// printf("03) standart PRINTF : |%-u|\n", 50);
// // 	// ft_printf("03) my       PRINTF : |%-u|\n", 50);
// // 	// printf("04) standart PRINTF : |%10u|\n", 90);
// // 	// ft_printf("04) my       PRINTF : |%10u|\n", 90);
// // 	// printf("05) standart PRINTF : |%.10u|\n", 90);
// // 	// ft_printf("05) my       PRINTF : |%.10u|\n", 90);
// // 	printf("06) standart PRINTF : |%15u|\n", -100);
// // 	ft_printf("06) my       PRINTF : |%15u|\n", -100);
// // 	printf("07) standart PRINTF : |%.15u|\n", -100);
// // 	ft_printf("07) my       PRINTF : |%.15u|\n", -100);
// // 	// printf("08) standart PRINTF : |%10.5u|\n", 52);
// // 	// ft_printf("08) my       PRINTF : |%10.5u|\n", 52);
// // 	// printf("09) standart PRINTF : |%5.10u|\n", 52);
// // 	// ft_printf("09) my       PRINTF : |%5.10u|\n", 52);
// // 	printf("10) standart PRINTF : |%20.15u|\n", -100000);
// // 	ft_printf("10) my       PRINTF : |%20.15u|\n", -100000);
// // 	printf("11) standart PRINTF : |%15.20u|\n", -100000);
// // 	ft_printf("11) my       PRINTF : |%15.20u|\n", -100000);
// // 	// printf("12) standart PRINTF : |%-10u|\n", 144);
// // 	// ft_printf("12) my       PRINTF : |%-10u|\n", 144);
// // 	// printf("13) standart PRINTF : |%-.10u|\n", 144);
// // 	// ft_printf("13) my       PRINTF : |%-.10u|\n", 144);
// // 	printf("14) standart PRINTF : |%-20u|\n", -20000000);
// // 	ft_printf("14) my       PRINTF : |%-20u|\n", -20000000);
// // 	// printf("15) standart PRINTF : |%08u|\n", 64);
// // 	// ft_printf("15) my       PRINTF : |%08u|\n", 64);
// // 	// printf("16) standart PRINTF : |%03.4u|\n", 10);
// // 	// ft_printf("16) my       PRINTF : |%03.4u|\n", 10);
// // 	// printf("17) standart PRINTF : |%u|\n", 0);
// // 	// ft_printf("17) my       PRINTF : |%u|\n", 0);
// // 	printf("18) standart PRINTF : |%.u|\n", 0);
// // 	ft_printf("18) my       PRINTF : |%.u|\n", 0);
// // 	printf("18+) standart PRINTF : |%.0u|\n", 0);
// // 	ft_printf("18+) my       PRINTF : |%.0u|\n", 0);
// // 	// printf("19) standart PRINTF : |%10u|\n", 0);
// // 	// ft_printf("19) my       PRINTF : |%10u|\n", 0);
// // 	// printf("20) standart PRINTF : |%.u|\n", 88);
// // 	// ft_printf("20) my       PRINTF : |%.u|\n", 88);
// // 	printf("21) standart PRINTF : |%u|\n", UINT_MAX);
// // 	ft_printf("21) my       PRINTF : |%u|\n", UINT_MAX);
// // 	printf("22) standart PRINTF : |%u| |%u|\n", (unsigned int)-1, UINT_MAX + 1);
// // 	ft_printf("22) my       PRINTF : |%u| |%u|\n", (unsigned int)-1, UINT_MAX + 1);
// }
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



// //	//	STR - READING %%%%%%%%%
// 	printf("\t%d\n", ft_printf("|%%%%s|%s|*|%s|%s|\n", "abcd", "efghjhk", "rrr", "ggg"));
// 	printf("\t%d\n", printf("|%%%%s|%s|*|%s|%s|\n", "abcd", "efghjhk", "rrr"));
// 	printf("|%%s|%%s|*|%s|%s|\n", "abcd", "efghjhk", "rrr", "ggg");//
//ft_printf("|%20.-3s|\n", "abcd");
// }

// // 		//C H A R S
// printf("\n############# PART 1 - normal\n");
// 	printf("\nTest with 0:\n");
// 	printf("\t%d\n", ft_printf("|%c|%5c|%10c|%-5c|%-c|", 0, 0, 0, 0, 0));
// 	printf("\t%d\n", printf("|%c|%5c|%10c|%-5c|%-c|", 0, 0, 0, 0, 0));


// 	printf("\nNormal tests without warnings:\n");
// 	printf("\t%d\n", ft_printf("%c, %1c, %3c, %10c", 'a', 'a', 'a', 'a'));
// 	printf("\t%d\n\n", printf("%c, %1c, %3c, %10c", 'a', 'a', 'a', 'a'));

// 	printf("\t%d\n", ft_printf("%-c, %-1c, %-3c, %-10c", 'a', 'a', 'a', 'a'));
// 	printf("\t%d\n", printf("%-c, %-1c, %-3c, %-10c", 'a', 'a', 'a', 'a'));


// // 	// assert(ft_printf("%0d|\n", 1234) == printf("%0d|\n", 1234));

// // 		//S T R I N G S
// // // ############# PART 0 NULL
// // 	// char	*str = NULL;

// // 	// //printf("\t%d\n", ft_printf("%s|", str));
// // 	// printf("\t%d\n\n", printf("%s|", str));
// // 	// printf("\t%d\n\n", printf("%.2s|", str));
// // 	// printf("\t%d\n\n", printf("%9.2s|", str));
// // 	// printf("\t%d\n\n", printf("%15.8s|", str));
// // 	// printf("\t%d\n\n", printf("%3.8s|", str));
// // 	// printf("\t%d\n\n", printf("%1.8s|", str));

// printf("%s\n", "############# PART 1 WITH FLAGS");
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


// printf("\n\n%s\n", "############# PART 2 NEGATIVE PRECISION");
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


// printf("\n\n%s\n", "############# PART 3 additional");
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
// // ################################## DI ####################################
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


// // //######################			01 width (format str)(flag 0)
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

// // //######################			02 width (* argument)(flag 0)
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

// //######################			03 width (format str)()
// printf("\n\n***   03 >> %s:\n", "width passed in a format string, no zero");
// 	printf("\t%d\n", ft_printf("%3d|\t", 1234));
// 	printf("\t%d - real ptf\n\n", printf("%3d|\t", 1234));

// 	printf("\t%d\n", ft_printf("%7d|", 1234));
// 	printf("\t%d - real ptf\n\n", printf("%7d|", 1234));

// 	printf("\t%d\n", ft_printf("%45d|", 1234));
// 	printf("\t%d - real ptf\n\n", printf("%45d|", 1234));

// 	printf("%d\n", ft_printf("eee%4dee%8d%0d%d|\t", 55555, 55555, 55555, 55555));
// 	printf("%d - real ptf\n\n", printf("eee%4dee%8d%0d%d|\t", 55555, 55555, 55555, 55555));//00 - UB!

// //######################			04 width (* argument)()
// printf("\n\n***   04 >> %s:\n", "width passed as arg, no zero");
// 	printf("\t%d\n", ft_printf("%*d|", 3, 1234));
// 	printf("\t%d - real ptf\n\n", printf("%*d|", 3, 1234));

// 	printf("\t%d\n", ft_printf("%*d|", 7, 1234));
// 	printf("\t%d - real ptf\n\n", printf("%*d|", 7, 1234));

// 	printf("\t%d\n", ft_printf("%*d|", 45, 1234));
// 	printf("\t%d - real ptf\n\n", printf("%*d|", 45, 1234));

// 	printf("%d\n", ft_printf("eee%*dee%*d%*d%d|\t", 4, 55555, 8, 55555, 0, 55555, 55555));
// 	printf("%d - real ptf\n\n", printf("eee%*dee%*d%*d%d|\t", 4, 55555, 8, 55555, 0, 55555, 55555));

// //######################			05 width (format str)(flag -)
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

// //######################			06 width (* argument)(flag -)
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


// // //######################			07 COMBO : width, precision, '-'
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

// printf("\n\n%s\n", "######################			08 NEGATIVE PRECISION");
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



// printf("%s", "######################			csnowbal");

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




// 	printf("\t%d \n\n", ft_printf("%%%-----%%------*.*u|", 4, -1, 97));
// 	printf("\t%d \n\n\n", printf("%%%-----%%------*.*u|", 4, -1, 97));
// %%0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000|    100 
// %%97  | 7 