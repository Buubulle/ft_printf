/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printPointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:52:22 by ahalleux          #+#    #+#             */
/*   Updated: 2022/05/25 19:13:01 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printpointer(unsigned long ptr)
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
		ft_printhexa(ptr);
		value += ft_lenhexa(ptr);
	}
	return (value);
}

void	ft_printhexa(unsigned long ptr)
{
	if (ptr >= 16)
	{
		ft_printhexa(ptr / 16);
		ft_printhexa(ptr % 16);
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

int	ft_lenhexa(unsigned long ptr)
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
