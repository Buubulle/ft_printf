/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:56:21 by ahalleux          #+#    #+#             */
/*   Updated: 2022/05/26 19:30:33 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_decimal(unsigned long u_n)
{
	unsigned int	value;

	value = 0;
	if (u_n == 0)
	{
		write(1, "0", 1);
		value++;
	}
	else
	{
		ft_print_unsigned(u_n);
		value += ft_len_unsigned(u_n);
	}
	return (value);
}

void	ft_print_unsigned(unsigned long u_n)
{
	if (u_n < 0)
	{
		
	}
	if (u_n > 9)
	{
		ft_print_unsigned(u_n / 10);
		ft_printchar((u_n % 10) + '0');
	}
	else
	{
		ft_printchar(u_n + '0');
	}
}

int	ft_len_unsigned(unsigned long u_n)
{
	int		value;

	value = 0;
	while (u_n)
	{
		u_n /= 16;
		value++;
	}
	return (value);
}