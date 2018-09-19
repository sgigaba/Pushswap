/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 09:05:59 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/13 15:48:34 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char	c;

	if (n >= -2147483647 && n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-1 * n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n >= 0 && n <= 9)
	{
		c = '0' + n;
		write(1, &c, 1);
	}
}