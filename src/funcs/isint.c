/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isint.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 14:52:28 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/28 06:47:07 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

int			isint(char *argv, int i)
{
	char	*temp;
	char	*tempjoin;

	i = ft_atoi(argv);
	if (ft_strcmp("-2147483648", argv) == 0)
		return (0);
	else if (i < 0)
	{
		i = i * -1;
		temp = ft_itoa(i);
		tempjoin = ft_strjoin("-", temp);
		free(temp);
		temp = ft_strdup(tempjoin);
		free(tempjoin);
	}
	else
		temp = ft_itoa(i);
	if (ft_strcmp(argv, temp) != 0)
	{
		free(temp);
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	free(temp);
	return (0);
}
