/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:12:23 by ahalleux          #+#    #+#             */
/*   Updated: 2022/05/25 23:42:34 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>  // a supprimer!!!
# include <unistd.h>
# include <stdarg.h>

int     ft_printf(const char *str, ...);
int     ft_checker(va_list args, const char id);
int     ft_printchar(int c);
int     ft_printstr(char *str);
int     ft_hexadecimal(unsigned long ptr);
void    ft_print_hexa(unsigned long ptr);
int     ft_len_hexa(unsigned long ptr);
int	    ft_decimal(unsigned long long str);
void	ft_print_decimal(unsigned long long str);
int 	ft_len_decimal(unsigned long long str);
void	ft_putstr(char *s);

#endif