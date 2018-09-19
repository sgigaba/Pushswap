/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poulaterotatea.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 14:01:42 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/23 17:13:02 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

void	rotpopulatea(int *a, int count, t_stacka **stacka)
{
	t_stacka	*head;
	int			i;

	i = 0;
	head = *stacka;
	while (count--)
	{
		(*stacka)->number = a[i];
		i++;
		(*stacka) = (*stacka)->next;
	}
	(*stacka)->next = NULL;
	(*stacka) = head;
}
