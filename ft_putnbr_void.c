/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_void.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:30:13 by alematos          #+#    #+#             */
/*   Updated: 2024/03/07 11:30:16 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_void(unsigned long int nbr, char *base, size_t *size)
{
	unsigned long int	base_len;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar_count('-', size);
		nbr *= -1;
	}
	if (nbr >= base_len)
		ft_putnbr_void(nbr / base_len, base, size);
	ft_putchar_count(base[nbr % base_len], size);
}
