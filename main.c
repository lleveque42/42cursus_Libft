#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

int success_or_not(int i, int j)
{
	if (i > 0 && j > 0)
		printf("SUCCESS\n");
	else if (i == 0 && j == 0)
		printf("SUCCESS\n");
	else
		printf("FAIL\n");
	return (0);
}

int	mem_is_ok(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			printf("FAIL\n");
			return (0);
		}
	}
	printf("SUCCESS\n");
	return (0);
}

///////////// MAIN ISALPHA, ISASCII, ISDIGIT, ISALNUM, ISPRINT /////////////////
int	main()
{
	printf("////// TEST ISALPHA ///////\n");
	success_or_not(ft_isalpha('a'), isalpha('a'));
	success_or_not(ft_isalpha('z'), isalpha('z'));
	success_or_not(ft_isalpha('a' - 1), isalpha('a' - 1));
	success_or_not(ft_isalpha('z' + 1), isalpha('z' + 1));
	printf("\n\n");

	printf("////// TEST ISALNUM ///////\n");
	success_or_not(ft_isalnum('0'), isalnum('0'));
	success_or_not(ft_isalnum('0' - 1), isalnum('0' - 1));
	success_or_not(ft_isalnum('9'), isalnum('9'));
	success_or_not(ft_isalnum('9' + 1), isalnum('9' + 1));
	success_or_not(ft_isalnum('a' - 1), isalnum('a' - 1));
	success_or_not(ft_isalnum('a' + 1), isalnum('a' + 1));
	printf("\n\n");

	printf("////// TEST ISASCII ///////\n");
	success_or_not(ft_isascii(0), isascii(0));
	success_or_not(ft_isascii(127), isascii(128));
	success_or_not(ft_isascii(0 - 1), isascii(0 - 1));
	success_or_not(ft_isascii(127 + 1), isascii(127 + 1));
	printf("\n\n");

	printf("////// TEST ISDIGIT ///////\n");
	success_or_not(ft_isdigit('0'), isdigit('0'));
	success_or_not(ft_isdigit('9'), isdigit('9'));
	success_or_not(ft_isdigit('0' - 1), isdigit('0' - 1));
	success_or_not(ft_isdigit('9' + 1), isdigit('9' + 1));
	printf("\n\n");

	printf("////// TEST ISPRINT ///////\n");
	success_or_not(ft_isprint(20), isprint(20));
	success_or_not(ft_isprint(126), isprint(126));
	success_or_not(ft_isprint(20 - 1), isprint(20 - 1));
	success_or_not(ft_isprint(126 + 1), isprint(126 + 1));
	printf("\n\n");

/////////////////  MAIN MEMCPY, MEMSET, BZERO, MEMMOVE  ///////////////////////

	printf("/////// TEST MEMSET //////\n");
	char a[] = "salut les amis";
	char b[] = "salut les amis";
	char c[] = "salut les amis";
	char d[] = "salut les amis";
	char e[] = "salut les amis";
	char f[] = "salut les amis";
	ft_memset(a, 52, 6);
	memset(b, 52, 6);
	ft_memset(c, 99, 14);
	memset(d, 99, 14);
	ft_memset(e, 127, 6);
	memset(f, 127, 6);
	mem_is_ok(a, b, 14);
	mem_is_ok(c, d, 14);
	mem_is_ok(e, f,14);
	printf("\n\n");

	printf("/////// TEST MEMCPY //////\n");
	char g[] = "salut les amis";
	char *h = malloc(7);
	char i[] = "salut les amis";
	char *j = malloc(7);
	char k[] = "salut les amis";
	char *l = malloc(10);
	char m[] = "salut les amis";
	char *n = malloc(10);
	ft_memcpy(h, g, 5);
	memcpy(j, i, 5);
	ft_memcpy(l, k, 8);
	memcpy(n, m, 8);
	mem_is_ok(j, h, 5);
	mem_is_ok(n, l, 8);
	printf("\n\n");

	printf("/////// TEST BZERO //////\n");
	ft_bzero(i, 5);
	bzero(g, 5);
	ft_bzero(k, 0);
	bzero(m, 0);
	mem_is_ok(g, i, 14);
	mem_is_ok(k, m, 14);
	printf("\n\n");

	printf("////// TEST MEMMOVE /////\n");
	char o[] = "coucou les amis";
	char oa[] = "coucou les amis";
	char p[] = "gouglouwehieifwef";
	char pa[] = "gouglouwehieifwef";
	char q[] = "bonjour comment ca va";
	char qa[] = "bonjour comment ca va";
	ft_memmove(p, o, 6);
	memmove(pa, oa, 6);
	mem_is_ok(o, oa, 15);
	mem_is_ok(p, pa, 15);
	ft_memmove(q, p, 7);
	memmove(qa, pa, 7);
	mem_is_ok(p, pa, 15);
	mem_is_ok(q, qa, 15);
}
////////////////////////////////  MAIN STRLEN  ////////////////////////////////
