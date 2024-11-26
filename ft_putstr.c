/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:31:07 by mkhallou          #+#    #+#             */
/*   Updated: 2024/11/25 19:32:16 by mkhallou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *cp)
{
	int	i;

	i = 0;
	if (!s)
		ft_putstr("(null)", cp);
	else
	{
		while (s[i])
		{
			ft_putchar(s[i], cp);
			i++;
		}
	}
}
