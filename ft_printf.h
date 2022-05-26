/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:12:23 by ahalleux          #+#    #+#             */
/*   Updated: 2022/05/26 04:49:30 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>  // a supprimer!!!
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int     ft_printf(const char *str, ...);
int     ft_checker(va_list args, const char id);
int     ft_printchar(int c);
int     ft_printstr(char *str);
int     ft_hexadecimal(unsigned long ptr);
void    ft_print_hexa(unsigned long ptr);
int     ft_len_hexa(unsigned long ptr);
int	    ft_decimal(int n);
void	ft_print_decimal(int n);
int 	ft_len_decimal(int n);
void	ft_putstr(char *s);
int    ft_print_pourcent(const char c);

#endif