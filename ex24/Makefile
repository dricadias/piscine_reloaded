# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adias-do <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/18 11:10:49 by adias-do          #+#    #+#              #
#    Updated: 2024/10/18 14:52:41 by adias-do         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OFILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADERS = ./includes/

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS) -I $(HEADERS)
	ar rc $(NAME) $(OFILES)
clean:
	rm -rf *.o

fclean: clean
	rm $(NAME)

re: fclean all
