/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:04:28 by alematos          #+#    #+#             */
/*   Updated: 2023/02/08 13:04:28 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_count(int n, size_t *size)
{
	if (n == -2147483648)
	{
		ft_putstr_count("-2147483648", size);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_count('-', size);
		n = n * -1;
	}
	if (n >= 10)
		ft_putnbr_count(n / 10, size);
	ft_putchar_count(n % 10 + '0', size);
}
