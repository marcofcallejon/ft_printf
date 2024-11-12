/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:55:20 by marfern3          #+#    #+#             */
/*   Updated: 2024/11/12 15:55:21 by marfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    print_char(char c)
{
    write(1, &c, 1);
}

void    print_string(char *str)
{
    while (*str)
        write(1, str++, 1);
}

void    print_integer(int num)
{
    ft_putnbr(num);
}

void    print_unsigned(unsigned int num)
{
    ft_putnbr_unsigned(num);
}

void    print_hex(unsigned int num, char format)
{
    ft_putnbr_hex(num, format);
}

