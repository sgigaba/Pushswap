/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isndig.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 14:21:24 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/23 14:22:38 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

int		isndig(int argc, char **argv, int i)
{
	int	ac;
	int	y;

	ac = argc - 1;
	y = 1;
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
