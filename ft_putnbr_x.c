/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:06:19 by alematos          #+#    #+#             */
/*   Updated: 2024/03/07 11:29:25 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_x(unsigned int nbr, char *base, size_t *size)
{
	unsigned int	base_len;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar_count('-', size);
		nbr *= -1;
	}
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base, size);
	ft_putchar_count(base[nbr % base_len], size);
}
