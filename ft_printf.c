/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:55:01 by alematos          #+#    #+#             */
/*   Updated: 2023/03/11 18:55:01 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int	counter;

	i = 0;
	counter = ft_strlen(format);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' )
		{
			i++;
			if (format[i] == 'c' )
			{
				i++;
				ft_putchar_fd(va_arg(args, int), 1);
			}
			else if(format[i] == 's')
			{
				i++;
				ft_putstr_fd(va_arg(args, char *), 1);
			}
			else if(format[i] == 'd')
			{
				i++;
				ft_putnbr_fd(va_arg(args, int), 1);
			}
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			i++;
		}
	}
	return(counter);
}

int main()
{
	int counter;
	char *str = "Hello world";
	char c = 'a';
	int i = 42;
	ft_printf("El caracter es: %c\n", c);
	ft_printf("El string es: %s\n", str);
	ft_printf("El entero es: %d\n", i);
	counter = ft_printf("123456789\n");
	ft_printf("La funcion devuelve: %d\n", counter);

	printf("El caracter es: %c\n", c);
	printf("El string es: %s\n", str);
	printf("El entero es: %d\n", i);
	counter = ft_printf("123456789\n");
	printf("La funcion devuelve: %d\n ", counter);



	return (0);
}