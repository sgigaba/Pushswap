/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputnargs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 14:54:30 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/28 09:26:17 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

void			inputnstringargs(char **argv, t_stacka **stack, int argc)
{
	int i;
	int c;

	c = 0;
	i = 1;
	if (isndig(argc, argv, i) == 1 || checknduplicate(argc, argv, i) == 1)
	{
		ft_putstr_fd("Error\n", 1);
		exit(0);
	}
	while (argv[i])
	{
		if (isint(argv[i], i) == 1)
			exit(0);
		i++;
	}
	i = 1;
	makestacka(argc - 1, argv, stack, i);
}
