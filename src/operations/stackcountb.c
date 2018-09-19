/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackcountb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 14:12:55 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/23 14:14:05 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

int		stackcountb(t_stackb **stackb)
{
	t_stackb	*head;
	int			i;

	head = *stackb;
	i = 0;
	while (head->next)
	{
		i++;
		head = head->next;
	}
	return (i);
}
