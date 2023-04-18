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

int			ft_printf(const char *format, ...);
void		ft_putnbr_unsigned_count(unsigned int n, size_t *size);
void		ft_putnbr_count(int n, size_t *size);
void		ft_putnbr_base(long long nbr, char *base, size_t *size);
void		ft_putchar_count(char c, size_t *size);
void		ft_putstr_count(char *s, size_t *size);
void		ft_countchar(size_t *size);
size_t		ft_strlen(const char *str);
void		ft_format_specifier(
				char specifier, va_list args, size_t *total_size);

#endif