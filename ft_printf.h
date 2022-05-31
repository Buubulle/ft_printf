/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:12:23 by ahalleux          #+#    #+#             */
/*   Updated: 2022/06/01 00:19:58 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>  // a supprimer!!!
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

# define LOWERCASE_HEXADECIMAL "0123456789abcdef"
# define UPPERCASE_HEXADECIMAL "0123456789ABCDEF"
# define BASE_DECIMAL "0123456789"

/*****************************
** Include Général function **
*****************************/
int		ft_printf(const char *str, ...);
int		ft_checker(va_list args, const char id);
int		ft_printchar(int c);
int		ft_printstr(char *str);
void	ft_putstr(char *s);
int		ft_print_percent(void);
int		t_strlen(char *str);

/*********************************
** Include Hexadecimal function **
*********************************/
int		ft_hexadecimal(unsigned long ptr);
void	ft_print_hexa(unsigned long ptr);
int		ft_len_hexa(unsigned long ptr);
int		ft_printxbase(int n, char *base);
int		ft_xx_base(int n, char id, char *base);

/*****************************
** Include Decimal function **
*****************************/
int		ft_decimal(int n);
void	ft_print_decimal(int n);
int		ft_len_decimal(int n);

/******************************
** Include Unsigned function **
******************************/
int		ft_print_unsigned(int n);
int		ft_unsigned_decimal(int n, char *base);

#endif