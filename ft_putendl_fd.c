/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:47:07 by alematos          #+#    #+#             */
/*   Updated: 2023/02/08 12:47:07 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putendl_count(char *s, int fd, size_t *size)
{
	ft_putstr_count(s, fd, size);
	ft_putchar_count('\n', fd, size);
}
