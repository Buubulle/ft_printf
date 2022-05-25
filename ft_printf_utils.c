/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:13:45 by ahalleux          #+#    #+#             */
/*   Updated: 2022/05/25 17:50:41 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_printchar(str[i]);
		i++;
	}
	return (i);
}

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}