/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:55:33 by marfern3          #+#    #+#             */
/*   Updated: 2024/11/12 15:55:37 by marfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    print_pointer(void *ptr)
{
    write(1, "0x", 2);
    ft_putptr((uintptr_t)ptr);
}

void    print_percent(void)
{
    write(1, "%", 1);
}

void    ft_putnbr_unsigned(unsigned int n)
{
    char    c;

    if (n >= 10)
        ft_putnbr_unsigned(n/10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

void    ft_putnbr_hex(unsigned int n, char format)
{
    char    *hex_base;

    if (format == 'x')
        hex_base = "0123456789abcdef";
    else
        hex_base = "0123456789ABCDEF";
    if (n >= 16)
        ft_putnbr_hex(n / 16, format);
    write(1, &hex_base[n % 16], 1);
    
}

void    ft_putptr(uintptr_t ptr)
{
    char *hex_base = "0123456789abcdef";

    if (ptr >= 16)
        ft_putptr(ptr / 16);
    write(1, &hex_base[ptr % 16], 1);
}
