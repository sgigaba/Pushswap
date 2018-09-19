/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 15:21:16 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/28 06:44:23 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "../libft/libft.h"
# include <ctype.h>

typedef struct				s_stacka
{
	int						number;
	struct s_stacka			*next;
}							t_stacka;

typedef struct				s_stackb
{
	int						bnumber;
	struct s_stackb			*next;
}							t_stackb;

typedef	struct				s_tempstack
{

	int						tnumber;
	struct s_tempstack		*nexts;
}							t_tempstack;

void						makestacka(int count, char **argv,
		t_stacka **stack, int i);
int							checkduplicate(int argc, char **argv, int i);
void						init(t_stacka **stacka, t_stackb **stackb);
int							isdig(int argc, char **argv, int i);
int							isint(char *argv, int i);
void						swapa(t_stacka **stack);
void						swapb(t_stackb **stack);
int							stackcounta(t_stacka **stacka);
int							stackcountb(t_stackb **stackb);
void						rotatea(t_stacka **stacka);
void						rotpopulatea(int *a, int count, t_stacka **stacka);
void						rotateb(t_stackb **stackb);
void						rotpopulateb(int *a, int count, t_stackb **stackb);
void						revrotatea(t_stacka **stacka);
void						revrotateb(t_stackb **stackb);
void						ssa(t_stacka **stacka, t_stackb **stackb);
void						rr(t_stacka **stacka, t_stackb **stackb);
void						rrr(t_stacka **stacka, t_stackb **stackb);
void						alloc(t_stacka **stacka, t_stackb **stackb);
int							sorted(t_stacka **stacka);
void						pb(t_stacka **stacka, t_stackb **stackb);
void						pa(t_stacka **stacka, t_stackb **stackb);
void						pushswap(t_stacka **stacka, t_stackb **stackb);
int							lastnumber(t_stacka **stack, int count);
int							checknduplicate(int argc, char **argv, int i);
int							isndig(int argc, char **argv, int i);
void						inputstringargs(char **argv, t_stacka **stack);
int							dooperations(char **line,
		t_stacka **stacka, t_stackb **stackb);
void						inputnstringargs(char **argv, t_stacka **stack,
		int argc);
void						freeit(t_stacka **stacka, t_stackb **stackb);
void						free_thisb(t_stackb **stack);
void						free_this(t_stacka **stack);

#endif
