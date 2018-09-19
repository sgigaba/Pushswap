/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 14:08:40 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/23 14:09:45 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

void		swapa(t_stacka **stack)
{
	t_stacka	*head;
	int			first;
	int			second;

	first = 0;
	second = 0;
	head = *stack;
	if (stackcounta(stack) > 1)
	{
		while (head->next != NULL)
		{
			first = head->number;
			head = head->next;
			second = head->number;
			break ;
		}
		head = *stack;
		while (head->next != NULL)
		{
			head->number = second;
			head = head->next;
			head->number = first;
			break ;
		}
	}
}

void		swapb(t_stackb **stack)
{
	t_stackb	*head;
	int			first;
	int			second;

	first = 0;
	second = 0;
	head = *stack;
	if (stackcountb(stack) > 1)
	{
		while (head->next != NULL)
		{
			first = head->bnumber;
			head = head->next;
			second = head->bnumber;
			break ;
		}
		head = *stack;
		while (head->next != NULL)
		{
			head->bnumber = second;
			head = head->next;
			head->bnumber = first;
			break ;
		}
	}
}

void		ssa(t_stacka **stacka, t_stackb **stackb)
{
	if ((*stacka)->number)
		swapa((stacka));
	if ((*stackb)->bnumber)
		swapb((stackb));
}
