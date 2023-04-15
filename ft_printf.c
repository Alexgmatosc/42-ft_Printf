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
	size_t	total_size;

	i = 0;
	total_size = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				ft_putchar_count(va_arg(args, int), &total_size);
			else if (format[i] == 's')
				ft_putstr_count(va_arg(args, char *), &total_size);
			else if (format[i] == 'i' || format[i] == 'd' )
				ft_putnbr_base_count(va_arg(args, int), "0123456789", &total_size);
			else if (format[i] == 'u')
				ft_putnbr_base_count(va_arg(args, unsigned int), "0123456789", &total_size);
			else if (format[i] == '%')
				ft_putchar_count('%', &total_size);
			else if (format[i] == 'x')
				ft_putnbr_base_count(va_arg(args, unsigned int), "0123456789abcdef", &total_size);
			else if (format[i] == 'X')
				ft_putnbr_base_count(va_arg(args, unsigned int), "0123456789ABCDEF", &total_size);
			else if (format[i] == 'p')
			{
				ft_putstr_count("0x", &total_size);
				ft_putnbr_base_count(va_arg(args, unsigned long long int), "0123456789abcdef", &total_size);
			}
			i++;
		}
		else
		{
			ft_putchar_count(format[i], &total_size);
			i++;
		}
	}
	return (total_size);
}
