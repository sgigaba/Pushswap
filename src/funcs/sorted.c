/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 17:16:56 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/23 14:41:27 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

int		sorted(t_stacka **stacka)
{
	t_stacka	*head;
	int			count;
	int			smallest;

	head = *stacka;
	count = stackcounta(stacka);
	while (count--)
	{
		smallest = count;
		head = *stacka;
		while (smallest--)
		{
			if (head->number > head->next->number)
				return (0);
			head = head->next;
		}
	}
	return (1);
}
