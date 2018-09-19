/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 14:29:19 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/28 09:25:52 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pushswap.h"

int				dooperations(char **line, t_stacka **stacka, t_stackb **stackb)
{
	if (ft_strcmp(*line, "pa") == 0)
		pa(stacka, stackb);
	else if (ft_strcmp(*line, "ra") == 0)
		rotatea(stacka);
	else if (ft_strcmp(*line, "rra") == 0)
		revrotatea(stacka);
	else if (ft_strcmp(*line, "pb") == 0)
		pb(stacka, stackb);
	else if (ft_strcmp(*line, "sa") == 0)
		swapa(stacka);
	else if (ft_strcmp(*line, "ss") == 0)
		ssa(stacka, stackb);
	else if (ft_strcmp(*line, "rr") == 0)
		rr(stacka, stackb);
	else if (ft_strcmp(*line, "rrb") == 0)
		revrotateb(stackb);
	else if (ft_strcmp(*line, "rb") == 0)
		rotateb(stackb);
	else if (ft_strcmp(*line, "rrr") == 0)
		rrr(stacka, stackb);
	else if (ft_strcmp(*line, "sb") == 0)
		swapb(stackb);
	else
		return (1);
	return (0);
}

int				main(int argc, char **argv)
{
	t_stacka	*stack;
	t_stackb	*stackb;
	char		*line;

	alloc(&stack, &stackb);
	if (argc == 1)
		exit(0);
	else if (argc == 2)
		inputstringargs(argv, &stack);
	else
		inputnstringargs(argv, &stack, argc);
	while (get_next_line(0, &line))
	{
		if (dooperations(&line, &stack, &stackb) == 1)
		{
			ft_putstr("Error\n");
			exit(0);
		}
		if (line)
			free(line);
	}
	(sorted(&stack) == 1) ? ft_putstr("OK\n") : ft_putstr("KO\n");
	free_this(&stack);
	free_thisb(&stackb);
	return (0);
}
