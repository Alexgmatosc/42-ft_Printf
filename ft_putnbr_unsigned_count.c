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

void	ft_putnbr_unsigned_count(unsigned int n, size_t *size)
{
	if (n >= 10)
		ft_putnbr_unsigned_count(n / 10, size);
	ft_putchar_count(n % 10 + '0', size);
}
