/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:13:12 by alematos          #+#    #+#             */
/*   Updated: 2023/03/11 19:13:12 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <string.h>
# include <ctype.h>
//# include "../libft/libft.h"

int		ft_printf(const char *format, ...);
void	ft_putnbr_unsigned_count(unsigned int n, int fd, size_t *size);
void	ft_putnbr_count(int n, int fd, size_t *size);
void	ft_putchar_count(char c, int fd, size_t *size);
void	ft_putstr_count(char *s, int fd, size_t *size);
void	ft_countchar(size_t *size);

#endif