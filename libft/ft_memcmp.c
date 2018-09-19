/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:37:31 by sgigaba           #+#    #+#             */
/*   Updated: 2018/07/01 10:46:04 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *sa;
	unsigned char *sb;

	sa = (unsigned char*)s1;
	sb = (unsigned char*)s2;
	if ((!s1) && (!s2))
	{
		return (0);
	}
	while (n--)
	{
		if (*sa > *sb)
		{
			return (*sa - *sb);
		}
		if (*sa < *sb)
		{
			return (*sa - *sb);
		}
		sa++;
		sb++;
	}
	return (0);
}
