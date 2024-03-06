/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_specifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:41:17 by alematos          #+#    #+#             */
/*   Updated: 2024/01/27 17:57:23 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_specifier(char specifier, va_list args, size_t *total_size)
{
	if (specifier == 'c')
		ft_putchar_count(va_arg(args, int), total_size);
	else if (specifier == 's')
		ft_putstr_count(va_arg(args, char *), total_size);
	else if (specifier == 'i' || specifier == 'd' )
		ft_putnbr_base(va_arg(args, int), "0123456789", total_size);
	else if (specifier == 'u')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789", total_size);
	else if (specifier == '%')
		ft_putchar_count('%', total_size);
	else if (specifier == 'x')
		ft_putnbr_x(va_arg(args, long long int), "0123456789abcdef", total_size);
	else if (specifier == 'X')
		ft_putnbr_x(va_arg(args, long long int), "0123456789ABCDEF", total_size);
	else if (specifier == 'p')
	{
		ft_putstr_count("0x", total_size);
		ft_putnbr_void(va_arg(args, unsigned long int),
			"0123456789abcdef", total_size);
	}
}
