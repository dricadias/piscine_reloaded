# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adias-do <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/20 14:05:15 by adias-do          #+#    #+#              #
#    Updated: 2024/10/20 14:30:02 by adias-do         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_display_file.c
OFILES = ft_display_file.o

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) -o $(NAME) $(OFILES)

clean:
	rm -f *.o

fclean: clean
	rm $(NAME)

re: fclean all
