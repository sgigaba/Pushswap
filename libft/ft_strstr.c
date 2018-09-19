/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:42:32 by sgigaba           #+#    #+#             */
/*   Updated: 2018/05/24 11:27:37 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		hcount;
	int		ncount;
	char	*h;
	char	*n;

	h = (char*)haystack;
	n = (char*)needle;
	hcount = 0;
	ncount = 0;
	if (n[ncount] == 0)
		return (h);
	while (h[hcount])
	{
		ncount = 0;
		while (n[ncount] == h[hcount + ncount])
		{
			if (n[ncount + 1] == '\0')
				return (h + hcount);
			ncount++;
		}
		hcount++;
	}
	return (NULL);
}
