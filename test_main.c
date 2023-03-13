/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:13:00 by alematos          #+#    #+#             */
/*   Updated: 2023/03/12 20:46:26 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	int counter;
	char *str = "Hello world";
	char c = 'a';
	int	i = 42;
	unsigned int l = 2147483649;




	ft_printf("FT_PRINTF:\n");
	ft_printf("El caracter es: %c\n", c);
	ft_printf("El string es: %s\n", str);
	ft_printf("El entero es: %i\n", i);
	ft_printf("El entero sin signo: %u\n", l);
	counter = ft_printf("123456789\n");
	ft_printf("La funcion devuelve: %i\n", counter);

	printf("\n\n");

	printf("PRINTF:\n");
	printf("El caracter es: %c\n", c);
	printf("El string es: %s\n", str);
	printf("El entero es: %i\n", i);
	printf("El entero sin signo: %u\n", l);
	counter = printf("123456789\n");
	printf("La funcion devuelve: %i\n", counter);

	printf("\n\n");
	printf("STRING\n");
	int printout1 = ft_printf("%s",str);
	ft_printf(" ft_printf %i",printout1);
	printf("\t");
	int printout2 = printf("%s",str);
	printf(" printf  %i",printout2);
	printf("\t");
	if (printout1 == printout2)
		printf("OK\n");
	else
		printf("KO\n");


	return (0);
}