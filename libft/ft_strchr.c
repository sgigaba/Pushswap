/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:22:35 by sgigaba           #+#    #+#             */
/*   Updated: 2018/06/30 12:23:56 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	size_t	count;

	str = (char*)s;
	count = 0;
	while (count <= ft_strlen(s))
	{
		if (str[count] == (char)c)
		{
			return (str + count);
		}
		count++;
	}
	return (NULL);
}
