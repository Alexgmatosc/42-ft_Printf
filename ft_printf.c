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
	while (format[i]) // while the string exists
	{
		if (format[i] == '%' ) // if the character is a % then we check the format argument
		{
			i++; // we move to the next character bc we already know that the current one is a %
			if (format[i] == 'c' ) // if the next character is a c then we print the next argument as a char
			{
				i++;
				ft_putchar_fd(va_arg(args, int), 1);
			}
			else if(format[i] == 's') // if the next character is a s then we print the next argument as a string
			{
				i++;
				ft_putstr_fd(va_arg(args, char *), 1);
			}
			else if(format[i] == 'i') // if the next character is a d then we print the next argument as a int
			{
				i++;
				ft_putnbr_fd(va_arg(args, int), 1);
			}
			else if (format[i] == 'u') // if the next character is a u then we print the next argument as a unsigned int
			{
				i++;
				ft_putnbr_unsigned_fd(va_arg(args, unsigned int), 1);
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
