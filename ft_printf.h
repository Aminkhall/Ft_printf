/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:03:57 by mkhallou          #+#    #+#             */
/*   Updated: 2024/11/26 16:18:39 by mkhallou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <libc.h>

int		ft_printf(const char *format, ...);
void	ft_put_unnmb(unsigned int n, int *cp);
void	ft_putaddress(unsigned long long n, int *cp);
void	ft_putchar(int c, int *cp);
void	ft_puthex(unsigned long long n, int c, int *cp);
void	ft_putnbr(int num, int *cp);
void	ft_putstr(char *s, int *cp);

#endif