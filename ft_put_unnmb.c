/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unnmb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:30:53 by mkhallou          #+#    #+#             */
/*   Updated: 2024/11/26 17:01:10 by mkhallou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_unnmb(unsigned int n, int *cp)
{
	if (*cp == -1)
		return ;
	if (n > 9)
		ft_put_unnmb(n / 10, cp);
	ft_putchar(((n % 10) + '0'), cp);
}
