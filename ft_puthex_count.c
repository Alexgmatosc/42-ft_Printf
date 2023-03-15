/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:23:53 by alematos          #+#    #+#             */
/*   Updated: 2023/03/15 20:55:16 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthex_count(unsigned char hex, int fd, size_t *size)
{
	if (hex >= 16)
		ft_puthex_count(hex / 16, fd, size);
	if (hex % 16 < 10)
		ft_putchar_count(hex % 16 + '0', fd, size);
	else
		ft_putchar_count(hex % 16 + 'a' - 10, fd, size);
	size++; 
}