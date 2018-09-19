/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_this.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 14:04:01 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/24 16:49:40 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

void		free_this(t_stacka **stack)
{
	t_stacka *temp;

	if (!(*stack))
		return ;
	temp = *stack;
	(*stack) = (*stack)->next;
	if ((*stack))
		free_this(stack);
	free(temp);
}

void		free_thisb(t_stackb **stack)
{
	t_stackb *temp;

	if (!(*stack))
		return ;
	temp = *stack;
	(*stack) = (*stack)->next;
	if ((*stack))
		free_thisb(stack);
	free(temp);
}
