/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 13:40:25 by sgigaba           #+#    #+#             */
/*   Updated: 2018/06/09 14:46:05 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		count;

	count = 0;
	copy = (char*)malloc(ft_strlen(s1) + 1);
	if (copy == NULL)
		return (NULL);
	while (s1[count])
	{
		copy[count] = s1[count];
		count++;
	}
	copy[count] = '\0';
	return (copy);
}
