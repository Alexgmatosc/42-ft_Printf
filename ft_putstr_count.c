/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:15:11 by alematos          #+#    #+#             */
/*   Updated: 2023/02/08 12:15:11 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_count(char *s, size_t *size)
{
	int	i;

	i = 0;
	if (!s)
		ft_putstr_count("(null)", size);
	else
	{
		while (s[i])
		{
			ft_putchar_count(s[i], size);
			i++;
		}
	}
}
