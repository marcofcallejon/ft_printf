/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcofernandezcallejon <marcofernandezc    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:50:40 by marcofernan       #+#    #+#             */
/*   Updated: 2024/10/25 13:16:07 by marcofernan      ###   ########.fr       */
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

