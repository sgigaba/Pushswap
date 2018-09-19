/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 17:15:19 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/24 14:10:55 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

void		pb(t_stacka **stacka, t_stackb **stackb)
{
	t_stacka	*heada;
	t_stackb	*headb;

	if ((*stacka)->next)
	{
		heada = *stacka;
		(*stacka) = (*stacka)->next;
		headb = (t_stackb*)malloc(sizeof(t_stackb));
		headb->bnumber = heada->number;
		heada->next = NULL;
		headb->next = *stackb;
		*stackb = headb;
		free(heada);
	}
}

void		pa(t_stacka **stacka, t_stackb **stackb)
{
	t_stacka	*heada;
	t_stackb	*headb;

	if ((*stackb)->next)
	{
		headb = *stackb;
		(*stackb) = (*stackb)->next;
		heada = (t_stacka*)malloc(sizeof(t_stacka));
		heada->number = headb->bnumber;
		headb->next = NULL;
		heada->next = *stacka;
		*stacka = heada;
		free(headb);
	}
}
