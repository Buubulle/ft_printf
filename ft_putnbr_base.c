/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 22:54:03 by ahalleux          #+#    #+#             */
/*   Updated: 2022/05/31 16:00:08 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_xX_hexadecimal(unsigned long n, char id, char *base)
{
    unsigned int	value;

	value = 0;
	if (n == 0)
	{
		write(1, "0x0", 3);
		value += 3;
	}
	else
	{
        write(1, "0x", 2);
		value += 2;
        if (id == 'x')
        {
            ft_lowercase_x(n, base);
            value += ft_len_hexa(n);
        }
        else
        {
            ft_uppercase_X(n, base);
            value += ft_len_hexa(n);
        }
	}
	return (value);
}

void    ft_lowercase_x(unsigned long n, char *base)
{
	
}

void    ft_uppercase_X(unsigned long n, char *base)
{
    
}