/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:30:48 by mkhallou          #+#    #+#             */
/*   Updated: 2024/11/26 17:45:49 by mkhallou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_pors(int c, int *cp, va_list args)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), cp);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), cp);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), cp);
	else if (c == 'u')
		ft_put_unnmb(va_arg(args, int), cp);
	else if (c == '%')
		ft_putchar('%', cp);
	else if (c == 'p')
		ft_putaddress(va_arg(args, unsigned long long), cp);
	else if (c == 'x' || c == 'X')
		ft_puthex(va_arg(args, unsigned int), c, cp);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		cp;

	va_start(args, format);
	i = 0;
	cp = 0;
	while (format[i])
	{
		if (format[i] != '%')
			ft_putchar(format[i], &cp);
		else if (format[i] == '%' && format[i + 1])
			check_pors(format[++i], &cp, args);
		i++;
	}
	va_end(args);
	return (cp);
}
