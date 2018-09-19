/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makestack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 14:37:38 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/27 09:26:29 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

void	makestacka(int count, char **argv, t_stacka **stack, int i)
{
	int			c;
	t_stacka	*head;

	c = count;
	head = *stack;
	while (c--)
	{
		head->next = (t_stacka*)malloc(sizeof(t_stacka));
		head->number = ft_atoi(argv[i]);
		head = head->next;
		i++;
	}
	head->next = NULL;
}
