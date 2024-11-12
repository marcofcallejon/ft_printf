/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:55:04 by marfern3          #+#    #+#             */
/*   Updated: 2024/11/12 15:55:05 by marfern3         ###   ########.fr       */
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
