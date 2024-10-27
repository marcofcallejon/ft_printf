# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcofernandezcallejon <marcofernandezc    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/23 20:30:34 by marcofernan       #+#    #+#              #
#    Updated: 2024/10/24 21:36:38 by marcofernan      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_printf.c ft_printf_utils.c ft_printf_utils2.c
OBJS = $(SRCS:.c=.o)
LIBFT = ./libft/libft.a

all: $(NAME)

$(NAME): $(OBJS)
    ar rcs $(NAME) $(OBJS) $(LIBFT)

clean:
    rm -f $(OBJS)
    make -C libft clean

fclean: clean
    rm -f $(NAME)
    make -C libft fclean

re: fclean all
