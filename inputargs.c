/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputargs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 14:23:04 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/28 07:59:33 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

void		freeargv(char **argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

void		inputstringargs(char **argv, t_stacka **stack)
{
	int			i;
	int			n;

	n = 0;
	i = 0;
	argv = ft_strsplit(argv[1], ' ');
	if (!argv[i])
		exit(0);
	while (argv[i])
	{
		if (isint(argv[i], i) == 1)
			exit(0);
		i++;
		n++;
	}
	i = 0;
	if (checkduplicate(n, argv, i) == 1 || isdig(n, argv, i) == 1)
	{
		ft_putstr_fd("Error\n", 1);
		exit(0);
	}
	makestacka(n, argv, stack, i);
	freeargv(argv);
}
