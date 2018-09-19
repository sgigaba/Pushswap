/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 15:31:52 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/13 15:37:55 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int result;
	int count;
	int sign;

	sign = 1;
	count = 0;
	result = 0;
	while (*str == '\t' || *str == '\v' || *str == '\f'
			|| *str == '\n' || *str == '\r' || *str == 32)
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while ((*str && ft_isdigit(*str) == 1))
	{
		result = (10 * result) + (*str - '0');
		str++;
	}
	result = (sign) * (result);
	return (result);
}
