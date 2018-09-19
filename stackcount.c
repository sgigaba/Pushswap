/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackcount.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 14:10:12 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/23 14:11:14 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

int		stackcounta(t_stacka **stacka)
{
	t_stacka	*head;
	int			i;

	head = *stacka;
	i = 0;
	while (head->next)
	{
		i++;
		head = head->next;
	}
	return (i);
}
