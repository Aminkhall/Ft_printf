/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:31:01 by mkhallou          #+#    #+#             */
/*   Updated: 2024/11/26 17:01:54 by mkhallou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long long n, int c, int *cp)
{
	char	*base;

	base = NULL;
	if (*cp == -1)
		return ;
	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	if (n > 15)
		ft_puthex(n / 16, c, cp);
	ft_putchar(base[n % 16], cp);
}
