# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 18:52:33 by alematos          #+#    #+#              #
#    Updated: 2023/03/11 18:52:33 by alematos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES = ft_printf.c ft_putnbr_unsigned_count.c ft_putnbr_count.c ft_putstr_count.c ft_putchar_count.c ft_countchar.c ft_putnbr_base.c ft_strlen.c ft_format_specifier.c ft_putnbr_void.c ft_putnbr_x.c

HEADERS = ft_printf.h

OBJECTS = $(SOURCES:.c=.o)

CC = @gcc

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJECTS) $(HEADERS)
	@echo "\033[1;3;33mCreating library...\033[0m"
	@ar -rcs $@ $^
	@echo "\033[1;7;32mLibrary successfully created:\n\033[0m" $(NAME)

fclean:
	@echo "\033[1;3;31mDeleting:\n\033[0m$(NAME)"
	@echo "\033[1;7;31mLibrary successfully deleted\033[0m"
	@rm -f $(OBJECTS) $(NAME)
clean:
	@echo "\033[1;3;31mDeleting:\n\033[0m$(OBJECTS)"
	@echo "\033[1;7;31mObjects successfully deleted\033[0m"
	@rm -f $(OBJECTS)

all:$(NAME)

re: fclean all

.PHONY: all clean fclean re