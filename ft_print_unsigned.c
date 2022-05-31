/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:56:21 by ahalleux          #+#    #+#             */
/*   Updated: 2022/06/01 00:03:06 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_decimal(int n, char *base)
{
	unsigned int	value;

	value = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		value += 1;
	}
	else
	{
		value += ft_printxbase(n, base);
	}
	return (value);
}
