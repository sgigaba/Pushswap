/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 07:14:56 by sgigaba           #+#    #+#             */
/*   Updated: 2018/07/01 10:54:22 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	size_t	fcount;
	size_t	scount;

	scount = start;
	fcount = 0;
	if (!s)
		return (NULL);
	fresh = (char*)malloc(len + 1);
	if (fresh == 0)
		return (NULL);
	while (s[scount] && len--)
	{
		fresh[fcount] = s[scount];
		fcount++;
		scount++;
	}
	fresh[fcount] = '\0';
	return (fresh);
}
