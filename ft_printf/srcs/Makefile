# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marfern3 <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 15:55:59 by marfern3          #+#    #+#              #
#    Updated: 2024/11/12 15:56:02 by marfern3         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_printf.c ft_printf_utils.c ft_printf_utils2.c
OBJS = $(SRCS:.c=.o)
LIBFT = ./LIBFT/libft.a

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
