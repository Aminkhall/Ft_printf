/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:31:04 by mkhallou          #+#    #+#             */
/*   Updated: 2024/11/26 17:29:36 by mkhallou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, int *cp)
{
	long	n;

	if (*cp == -1)
		return ;
	n = num;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-', cp);
	}
	if (n > 9)
		ft_putnbr(n / 10, cp);
	ft_putchar(((n % 10) + '0'), cp);
}
