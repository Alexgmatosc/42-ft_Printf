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
			{
				i++;
				ft_putchar_count(va_arg(args, int), 1, &total_size);
			}
			else if (format[i] == 's')
			{
				i++;
				ft_putstr_count(va_arg(args, char *), 1, &total_size);
			}
			else if (format[i] == 'i' || format[i] == 'd' )
			{
				i++;
				ft_putnbr_count(va_arg(args, int), 1, &total_size);
			}
			else if (format[i] == 'u')
			{
				i++;
				ft_putnbr_unsigned_count (va_arg(args, unsigned int), 1, &total_size);
			}
			else if (format[i] == '%')
			{
				i++;
				ft_putchar_count('%',1, &total_size);
			}
		}
		else
		{
			ft_putchar_count(format[i], 1, &total_size);
			i++;
		}
	}
	return(total_size);
}
