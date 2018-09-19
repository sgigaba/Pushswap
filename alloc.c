/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 06:18:22 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/28 08:16:55 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

void	alloc(t_stacka **stacka, t_stackb **stackb)
{
	(*stackb) = (t_stackb*)malloc(sizeof(t_stackb));
	(*stacka) = (t_stacka*)malloc(sizeof(t_stacka));
	(*stackb)->next = NULL;
	(*stacka)->number = 0;
	(*stackb)->bnumber = 0;
}
