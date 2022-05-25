/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:39:34 by ahalleux          #+#    #+#             */
/*   Updated: 2022/05/25 23:38:49 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_decimal(unsigned long long str)
{
	unsigned long	value;

	value = 0;
	if (str)
	{
        ft_print_decimal(str);
        value += ft_len_decimal(str);
	}
	return (value);
}

void	ft_print_decimal(unsigned long long str)
{
	if (str >= 10)
	{
		ft_print_decimal(str / 10);
		ft_print_decimal(str % 10);
	}
	else
	{
		if (str <= 9)
		{
			ft_printchar((str + '0'));
		}
		else
		{
			ft_printchar((str - 10 + 'a'));
		}
	}
}

int	ft_len_decimal(unsigned long long str)
{
	int		value;

	value = 0;
	while (str)
	{
		str /= 10;
		value++;
	}
	return (value);
}