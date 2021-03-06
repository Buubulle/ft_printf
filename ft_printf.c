/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:48:00 by ahalleux          #+#    #+#             */
/*   Updated: 2022/06/01 00:20:03 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		value;
	va_list	args;

	i = 0;
	value = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
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

int	ft_checker(va_list args, const char id)
{
	int	value;

	value = 0;
	if (id == 'c')
		value += ft_printchar(va_arg(args, int));
	else if (id == 's')
		value += ft_printstr(va_arg(args, char *));
	else if (id == 'p')
		value += ft_hexadecimal(va_arg(args, unsigned long));
	else if (id == 'd' || id == 'i')
		value += ft_decimal(va_arg(args, int));
	else if (id == 'u')
		value += ft_unsigned_decimal(va_arg(args, int), BASE_DECIMAL);
	else if (id == 'x')
		value += ft_xx_base(va_arg(args, int), id, LOWERCASE_HEXADECIMAL);
	else if (id == 'X')
		value += ft_xx_base(va_arg(args, int), id, UPPERCASE_HEXADECIMAL);
	else if (id == '%')
		value += ft_print_percent();
	return (value);
}
