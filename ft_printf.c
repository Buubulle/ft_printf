/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:48:00 by ahalleux          #+#    #+#             */
/*   Updated: 2022/05/25 23:09:38 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


int main(void)
{
    unsigned int pointeur;

    pointeur = 12545;
    printf("Real Printf \n");
    printf("%d \n" ,printf("%d", 650));
    printf("%d", 650);
    printf("\n ------------ \n");
    printf("My Printf \n");
    printf("%d \n" ,ft_printf("%d", 650));
    printf("%d", 650);
}


int ft_printf(const char *str, ...)
{
    int i;
    int value;
    va_list args;


    i = 0;
    value = 0;
    va_start(args, str);
    while(str[i])
    {
        if(str[i] == '%')
        {
            value += ft_checker(args, str[i + 1]);
            i += 2;
        }
        else
        {
            value += ft_printchar(str[i]);
            i++;
        }
    }
    va_end(args);
    return (value);
}

int ft_checker(va_list args, const char id)
{
    int value;

    value = 0;
    if (id == 'c')
        value += ft_printchar(va_arg(args, int));
    else if (id == 's')
        value += ft_printstr(va_arg(args, char *));
    else if (id == 'p')
        value += ft_printpointer(va_arg(args, unsigned long));
    else if (id == 'd' || id == 'i')
        value += ft_hexadecimal(va_arg(args, int));
    // else if (id == 'u')
    //     return NULL;
    else if (id == 'x' || id == 'X')
        value += ft_printpointer(va_arg(args, unsigned long), id);
    // else if (id == '%')
    
    return (value);
}