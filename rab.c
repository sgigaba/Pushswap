/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 14:04:37 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/23 14:06:27 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

void		rotatea(t_stacka **stacka)
{
	int			first;
	t_stacka	*head;
	int			i;
	int			count;
	int			a[stackcounta(stacka)];

	if ((*stacka)->next)
	{
		i = 0;
		head = *stacka;
		count = stackcounta(stacka);
		first = head->number;
		head = head->next;
		while (head->next)
		{
			a[i] = head->number;
			head = head->next;
			i++;
		}
		a[i] = first;
		rotpopulatea(a, count, stacka);
	}
}

void		rotateb(t_stackb **stackb)
{
	int			first;
	t_stackb	*head;
	int			i;
	int			count;
	int			a[stackcountb(stackb)];

	if ((*stackb)->next)
	{
		i = 0;
		head = *stackb;
		count = stackcountb(stackb);
		first = head->bnumber;
		head = head->next;
		while (head->next)
		{
			a[i] = head->bnumber;
			head = head->next;
			i++;
		}
		a[i] = first;
		rotpopulateb(a, count, stackb);
	}
}

void		rr(t_stacka **stacka, t_stackb **stackb)
{
	if ((*stacka)->number)
		rotatea(stacka);
	if ((*stackb)->bnumber)
		rotateb(stackb);
}
