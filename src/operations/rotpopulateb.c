/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotpopulateb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 14:43:07 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/23 17:13:21 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

void		rotpopulateb(int *a, int count, t_stackb **stackb)
{
	t_stackb	*head;
	int			i;

	i = 0;
	head = *stackb;
	while (count--)
	{
		(*stackb)->bnumber = a[i];
		i++;
		(*stackb) = (*stackb)->next;
	}
	(*stackb)->next = NULL;
	(*stackb) = head;
}
