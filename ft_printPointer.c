/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printPointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:52:22 by ahalleux          #+#    #+#             */
/*   Updated: 2022/05/25 23:18:51 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hexadecimal(unsigned long ptr)
{
	unsigned int	value;

	value = 0;
	if (ptr == 0)
	{
		write(1, "0x0", 3);
		value += 3;
	}
	else
	{
		write(1, "0x", 2);
		value += 2;
		ft_print_hexa(ptr);
		value += ft_len_hexa(ptr);
	}
	return (value);
}

void	ft_print_hexa(unsigned long ptr)
{
	if (ptr >= 16)
	{
		ft_print_hexa(ptr / 16);
		ft_print_hexa(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
		{
			ft_printchar((ptr + '0'));
		}
		else
		{
			ft_printchar((ptr - 10 + 'a'));
		}
	}
}

int	ft_len_hexa(unsigned long ptr)
{
	int		value;

	value = 0;
	while (ptr)
	{
		ptr /= 16;
		value++;
	}
	return (value);
}
