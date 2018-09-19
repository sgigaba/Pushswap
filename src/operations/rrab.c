/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrab.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 14:07:14 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/23 14:51:40 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

void		revrotateb(t_stackb **stackb)
{
	int			last;
	t_stackb	*head;
	int			i;
	int			c;
	int			a[stackcountb(stackb)];

	i = 0;
	c = 1;
	head = *stackb;
	while (head->next)
	{
		a[c] = head->bnumber;
		i++;
		head = head->next;
		if (i == (stackcountb(stackb) - 1))
		{
			last = head->bnumber;
			a[0] = last;
			break ;
		}
		c++;
	}
	rotpopulateb(a, stackcountb(stackb), stackb);
}

void		revrotatea(t_stacka **stacka)
{
	int			last;
	t_stacka	*head;
	int			i;
	int			c;
	int			a[stackcounta(stacka)];

	i = 0;
	c = 1;
	head = *stacka;
	while (head->next)
	{
		a[c] = head->number;
		i++;
		head = head->next;
		if (i == (stackcounta(stacka) - 1))
		{
			last = head->number;
			a[0] = last;
			break ;
		}
		c++;
	}
	rotpopulatea(a, stackcounta(stacka), stacka);
}

void		rrr(t_stacka **stacka, t_stackb **stackb)
{
	if ((*stacka)->number)
		revrotatea(stacka);
	if ((*stackb)->bnumber)
		revrotateb(stackb);
}
