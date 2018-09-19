/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdig.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 14:20:15 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/23 14:20:59 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

int		isdig(int argc, char **argv, int i)
{
	int	ac;
	int	y;

	if (argc == 1)
		ac = 1;
	else
		ac = argc - 1;
	y = 0;
	while (ac--)
	{
		i = 0;
		while (argv[y][i])
		{
			if (argv[y][i] == '-')
				i++;
			if (argv[y][i] >= 48 && argv[y][i] <= 57)
				i++;
			else
				return (1);
		}
		y++;
	}
	return (0);
}
