/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcofernandezcallejon <marcofernandezc    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:51:34 by marcofernan       #+#    #+#             */
/*   Updated: 2024/10/27 15:48:46 by marcofernan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

void    print_char(char c);
void    print_string(char *str);
void    print_integer(int num);
void    print_unsigned(unsigned int num);
void    print_hex(unsigned int num, char format);
void    print_pointer(void *ptr);
void    print_percent(void);

void    ft_putnbr(int n);
void    ft_putnbr_unsigned(unsigned int n);
void    ft_putnbr_hex(unsigned int n, char format);
void    ft_putptr(uintptr_t ptr);

int     ft_printf(const char *format, ...);

//void    handle_conversion(char specifier, va_list args);

#endif
