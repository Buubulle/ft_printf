/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:39:34 by ahalleux          #+#    #+#             */
/*   Updated: 2022/05/26 04:05:03 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal(int n)
{
	int	value;

	value = 0;
    ft_print_decimal(n);
    value += ft_len_decimal(n);
	return (value);
}

void	ft_print_decimal(int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
			write(1, "-2147483648", 11);
		else
		{
			write(1, "-", 1);
			n = -n;
		}
	}
	if (n > 9)
	{
		ft_print_decimal(n / 10);
		ft_printchar((n % 10) + '0');
	}
	else
	{
		ft_printchar(n + '0');
	}
}

int	ft_len_decimal(int n)
{
	int		value;

	value = 0;
	if (n < 0)
	{
		n *= -1;
		value++;
	}
	if (n == 0)
		value++;
	while (n)
	{
		n /= 10;
		value++;
	}
	return (value);
}