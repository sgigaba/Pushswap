/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 10:05:16 by sgigaba           #+#    #+#             */
/*   Updated: 2018/06/02 10:36:22 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	char	*str;
	int		count;

	count = 0;
	str = (char*)s;
	while (str[count])
	{
		ft_putchar(str[count]);
		count++;
	}
	ft_putchar('\n');
}
