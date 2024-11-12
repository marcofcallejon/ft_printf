/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern3 <marfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:52:17 by marfern3          #+#    #+#             */
/*   Updated: 2024/11/12 16:00:18 by marfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list	args;
    int    	i;

    va_start(args, format);
    i = 0;
    while (format[i])
    {
	    if (format[i] == '%')
	    {
		    i++;
		    if (format[i] == 'c')
			    print_char((char) va_arg(args, int));
		    else if (format[i] == 's')
			    print_string(va_arg(args, char *));
		    else if (format[i] == 'd' || format[i] == 'i')
			    print_integer(va_arg(args, int));
		    else if (format[i] == 'u')
			    print_unsigned(va_arg(args, unsigned int));
		    else if (format[i] == 'x' || format[i] == 'X')
			    print_hex(va_arg(args, unsigned int), format[i]);
		    else if (format[i] == 'p')
			    print_pointer(va_arg(args, void *));
		    else if (format[i] == '%')
			    print_percent();
	    }
	    else
		    write(1, &format[i], 1);
	    i++;
    }
    va_end(args);
    return (0);
}

// int main(void)
// {
//     int a = 42;
//     int *ptr = &a;

//     Prueba de caracteres y cadenas
//     ft_printf("Prueba de carácter: %c\n", 'A');
//     ft_printf("Prueba de cadena: %s\n", "Hola, Mundo!");

//     Prueba de enteros con signo (d y i)
//     ft_printf("Prueba de entero (positivo): %d\n", 12345);
//     ft_printf("Prueba de entero (negativo): %i\n", -54321);

//     Prueba de entero sin signo
//     ft_printf("Prueba de unsigned int: %u\n", 4294967295);

//     Prueba de hexadecimal (minúsculas y mayúsculas)
//     ft_printf("Prueba de hexadecimal minúsculas: %x\n", 255);
//     ft_printf("Prueba de hexadecimal mayúsculas: %X\n", 255);

//     Prueba de punteros
//     ft_printf("Prueba de puntero: %p\n", ptr);

//     Prueba del símbolo del porcentaje
//     ft_printf("Prueba del porcentaje: %%\n");

//     Prueba de punteros NULL
//     ft_printf("Puntero NULL: %p\n", NULL);

//     Prueba de puntero a un entero
//     int num = 123;
//     int *ptr_num = &num;
//     ft_printf("Puntero a entero: %p\n", ptr_num);

//     Prueba de puntero a una cadena
//     char *str = "Hola";
//     ft_printf("Puntero a cadena: %p\n", str);

//     Prueba conjunta con un solo printf
//     ft_printf("Prueba combinada: char: %c, string: %s, entero: %d, unsigned: %u, hex: %x, puntero: %p, porcentaje: %%\n",
//               'A', "Hola", 12345, 4294967295, 255, ptr);

//     return 0;
// }

