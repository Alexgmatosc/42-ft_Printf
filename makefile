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

SOURCES = ft_printf.c ft_putnbr_unsigned_fd.c

HEADERS = ft_printf.h

OBJECTS = $(SOURCES:.c=.o)

CC = @gcc

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJECTS) $(HEADERS)
	@echo "\033[1;3;33mCreando la libreria...\033[0m"
	@ar -rcs $@ $^
	@echo "\033[1;7;32mLibreria creada con exito:\n\033[0m" $(NAME)

fclean: clean
	@echo "\033[1;3;31mEliminando:\n\033[0m$(NAME)"
	@echo "\033[1;7;31mLibreria eliminada con exito\033[0m"
	@rm -f $(NAME)
clean:
	@echo "\033[1;3;31mEliminando:\n\033[0m$(OBJECTS)"
	@echo "\033[1;7;31mObjetos eliminados con exito\033[0m"
	@rm -f $(OBJECTS)

all:$(NAME)

re: fclean all

.PHONY: all clean fclean re