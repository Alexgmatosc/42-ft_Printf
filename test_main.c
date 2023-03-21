/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:13:00 by alematos          #+#    #+#             */
/*   Updated: 2023/03/22 00:46:59 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	int	counter;
	char *str = "Hello world";
	char c = 'a';
	int	i = 42;
	unsigned int u = 2147483650;
	unsigned int x = 42;
	unsigned int X = 42;
	void *p = &i;

	char *ok = "\033[32mOK\033[0m\n\n";
	char *ko = "\033[31mKO\033[0m\n\n";

	int	printout1;
	int	printout2;


	printf("STRING\n\n"); // TESTING STRINGS
	printout1 = ft_printf("%s",str);
	ft_printf(" ft_printf %i",printout1);
	printf("\t");
	printout2 = printf("%s",str);
	printf(" printf  %i",printout2);
	printf("\t");
	if (printout1 == printout2) {
		printf("%s",ok); 
	} 
	else {
		printf("%s",ko); 
	}

	printf("CHAR\n\n"); // TESTING CHARS
	printout1 = ft_printf("%c",c);
	ft_printf(" ft_printf %i",printout1);
	printf("\t\t");
	printout2 = printf("%c",c);
	printf(" printf  %i",printout2);
	printf("\t\t");
	if (printout1 == printout2) {
		printf("%s",ok); 
	} 
	else {
		printf("%s",ko); 
	}
	
	printf("INT\n\n"); // TESTING INTS
	printout1 = ft_printf("%i",i);
	ft_printf(" ft_printf %i",printout1);
	printf("\t\t");
	printout2 = printf("%i",i);
	printf(" printf  %i",printout2);
	printf("\t\t");
	if (printout1 == printout2) {
		printf("%s",ok); 
	} 
	else {
		printf("%s",ko); 
	}
	
	printf("UNSIGNED INT\n\n"); // TESTING UNSIGNED INTS
	printout1 = ft_printf("%u",u);
	ft_printf(" ft_printf %i",printout1);
	printf("\t\t");
	printout2 = printf("%u",u);
	printf(" printf  %i",printout2);
	printf("\t\t");
	if (printout1 == printout2) {
		printf("%s",ok); 
	} 
	else {
		printf("%s",ko); 
	}

	printf("INT (BASE 10)\n\n"); // TESTING BASE 10 
	printout1 = ft_printf("%d",i);
	ft_printf(" ft_printf %i",printout1);
	printf("\t\t");
	printout2 = printf("%d",i);
	printf(" printf  %i",printout2);
	printf("\t\t");
	if (printout1 == printout2) {
		printf("%s",ok); 
	} 
	else {
		printf("%s",ko); 
	}

	printf("HEXADECIMAL LOWERCASE\n\n"); // TESTING HEXADECIMAL LOWERCASE
	printout1 = ft_printf("%x",x);
	ft_printf(" ft_printf %i",printout1);
	printf("\t\t");
	printout2 = printf("%x",x);
	printf(" printf  %i",printout2);
	printf("\t\t");
	if (printout1 == printout2) {
		printf("%s",ok); 
	} 
	else {
		printf("%s",ko); 
	}

	printf("HEXADECIMAL UPPERCASE\n\n"); // TESTING HEXADECIMAL UPPERCASE
	printout1 = ft_printf("%X",X);
	ft_printf(" ft_printf %i",printout1);
	printf("\t\t");
	printout2 = printf("%X",X);
	printf(" printf  %i",printout2);
	printf("\t\t");
	if (printout1 == printout2) {
		printf("%s",ok); 
	} 
	else {
		printf("%s",ko); 
	}

	printf("POINTER\n\n"); // TESTING POINTERS
	printout1 = ft_printf("%p",p);
	ft_printf(" ft_printf %i",printout1);
	printf("\t\t");
	printout2 = printf("%p",p);
	printf(" printf  %i",printout2);
	printf("\t\t");
	if (printout1 == printout2) {
		printf("%s",ok);
	}
	else {
		printf("%s",ko);
	}

	printf("PERCENT\n\n"); // TESTING PERCENT
	printout1 = ft_printf("test 100%%");
	ft_printf(" ft_printf %i",printout1);
	printf("\t\t");
	printout2 = printf("test 100%%");
	printf(" printf  %i",printout2);
	printf("\t\t");
	if (printout1 == printout2) {
		printf("%s",ok);
	}
	else {
		printf("%s",ko);
	}

	printf("MULTI\n\n"); // TESTING MULTIPLE FORMATS
	printout1 = ft_printf("test %s %c %i %u %d 100%%",str,c,i,u,i);
	ft_printf(" ft_printf %i",printout1);
	printf("\t\t");
	printout2 = printf("test %s %c %i %u %d 100%%",str,c,i,u,i);
	printf(" printf  %i",printout2);
	printf("\t\t");
	if (printout1 == printout2) {
		printf("%s",ok);
	}
	else {
		printf("%s",ko);
	}
	
	
	
	
    return (0);
}
