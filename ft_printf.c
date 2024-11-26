/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:30:48 by mkhallou          #+#    #+#             */
/*   Updated: 2024/11/25 22:06:18 by mkhallou         ###   ########.fr       */
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
		ft_puthex(va_arg(args, unsigned long long), c, cp);
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
		if (format[i] && format[i] == '%')
			check_pors(format[++i], &cp, args);
		else
			ft_putchar(format[i], &cp);
		i++;
	}
	va_end(args);
	return (cp);
}

int main()
{
	int a = ft_printf("b-h%x T}%x%dB%p%i,IvRs%XmZj%cUU`MOBVisJ%s\r04;@p%X%sX", -1676595710, 1453192932, -96482680, (void *)-2172162475412057634, 536580747, -906831861, -837596881, "X(WRs)rp>=<C*T?WB'sZchM-w<\\bu\"\fE8X!H[@FsB*$\n`<4p*uaz(}aE7w\\q-0BI ZbJxWp;\vWJ : 2z8hhbrN0}2ST4", -11311222, "mhD6|fc3c\vL`T@1-YoDf%Q%GWO&T4K9'(uKe\v]ulEC\r[\nRb%8-3^KQu=[K!/");
	puts("");
	int b = printf("b-h%x T}%x%dB%p%i,IvRs%XmZj%cUU`MOBVisJ%s\r04;@p%X%sX", -1676595710, 1453192932, -96482680, (void *)-2172162475412057634, 536580747, -906831861, -837596881, "X(WRs)rp>=<C*T?WB'sZchM-w<\\bu\"\fE8X!H[@FsB*$\n`<4p*uaz(}aE7w\\q-0BI ZbJxWp;\vWJ : 2z8hhbrN0}2ST4", -11311222, "mhD6|fc3c\vL`T@1-YoDf%Q%GWO&T4K9'(uKe\v]ulEC\r[\nRb%8-3^KQu=[K!/");
	printf("\n%d\n%d", a, b);
	// printf("\n%d",b);
}