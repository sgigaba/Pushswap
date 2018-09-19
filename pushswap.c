/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:20:31 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/28 16:02:29 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pushswap.h"

int			lastnumber(t_stacka **stack, int count)
{
	t_stacka	*head;
	int			i;
	int			last;

	i = 0;
	head = *stack;
	last = 0;
	while (head->next)
	{
		if (i == (count - 1))
		{
			last = head->number;
			break ;
		}
		head = head->next;
		i++;
	}
	return (last);
}

int			main(int argc, char **argv)
{
	t_stacka	*stack;
	t_stackb	*stackb;

	alloc(&stack, &stackb);
	if (argc == 1)
		exit(0);
	if (argc >= 2 && argv)
	{
		if (argc == 2)
			inputstringargs(argv, &stack);
		else
			inputnstringargs(argv, &stack, argc);
	}
	pushswap(&stack, &stackb);
	free_this(&stack);
	free_thisb(&stackb);
	return (0);
}

void		sorting(t_stacka **stack, t_stackb **stackb)
{
	int	count;

	count = stackcounta(stack);
	if (lastnumber(stack, count) < (*stack)->number)
	{
		ft_putstr("rra\n");
		revrotatea(stack);
	}
	else if ((*stack)->number > lastnumber(stack, count))
	{
		ft_putstr("ra\n");
		rotatea(stack);
	}
	else if ((*stack)->number > (*stack)->next->number)
	{
		ft_putstr("sa\n");
		swapa(stack);
	}
	else if (((*stack)->number < (*stack)->next->number ||
				(*stack)->number < lastnumber(stack, count)))
	{
		ft_putstr("pb\n");
		pb(stack, stackb);
	}
}

void		threedigit(t_stacka **stacka)
{
	while (sorted(stacka) != 1)
	{
		if ((*stacka)->number > (*stacka)->next->number)
		{
			ft_putstr("sa\n");
			swapa(stacka);
		}
		else if ((*stacka)->number > lastnumber(stacka, stackcounta(stacka)))
		{
			ft_putstr("rra\n");
			revrotatea(stacka);
		}
	}
}

void		pushswap(t_stacka **stacka, t_stackb **stackb)
{
	t_stacka	*heada;
	int			count;

	heada = *stacka;
	count = stackcounta(stacka);
	if (stackcounta(stacka) == 3)
	{
		threedigit(stacka);
		exit(0);
	}
	while (sorted(stacka) != 1)
	{
		while (sorted(stacka) != 1)
			sorting(stacka, stackb);
		while (stackcountb(stackb) != 0)
		{
			pa(stacka, stackb);
			ft_putstr("pa\n");
		}
	}
}
