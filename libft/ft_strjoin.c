/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 13:32:37 by sgigaba           #+#    #+#             */
/*   Updated: 2018/06/30 12:24:53 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	size_t	sa;
	size_t	sb;
	char	*pre;

	sb = 0;
	sa = 0;
	if (!s1 || !s2)
		return (NULL);
	pre = (char*)s1;
	if (!(fresh = (char*)malloc(sizeof(char) *
					(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (pre[sa])
	{
		fresh[sa] = pre[sa];
		sa++;
	}
	while (s2[sb])
	{
		fresh[sa++] = s2[sb];
		sb++;
	}
	fresh[sa] = '\0';
	return (fresh);
}
