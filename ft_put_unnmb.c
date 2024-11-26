/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unnmb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:30:53 by mkhallou          #+#    #+#             */
/*   Updated: 2024/11/25 20:13:18 by mkhallou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_unnmb(unsigned int n, int *cp)
{
	if (n > 9)
		ft_putnbr(n / 10, cp);
	ft_putchar(((n % 10) + '0'), cp);
}