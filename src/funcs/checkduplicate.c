/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkduplicate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 06:19:15 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/23 14:19:45 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

int		checkduplicate(int argc, char **argv, int i)
{
	int	duplicate;
	int	n;
	int	ac;

	argc = argc - 1;
	ac = argc;
	while (ac--)
	{
		duplicate = ft_atoi(argv[i]);
		n = 0;
		while (n <= argc)
		{
			if (n == i)
				n++;
			else
			{
				if (ft_atoi(argv[n]) == ft_atoi(argv[i]))
					return (1);
				else
					n++;
			}
		}
		i++;
	}
	return (0);
}
