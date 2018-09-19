/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 07:33:00 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/13 17:08:45 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_space(char c)
{
	if (c == '\n' || c == '\t' || c == ' ' || c == '\v')
		return (1);
	if (c == '\0')
		return (1);
	return (0);
}

static int			allspace(char const *s)
{
	int		count;

	count = 0;
	while (s[count])
	{
		if (s[count] == ' ' || s[count] == '\t'
				|| s[count] == '\v' || s[count] == '\n')
			count++;
		else
			return (0);
	}
	return (1);
}

static void			ft_copy(char const *s, char *str, int i, int j)
{
	int		x;

	x = 0;
	while (i <= j)
		str[x++] = s[i++];
	str[x] = '\0';
}

char				*ft_strtrim(char const *s)
{
	char	*str;
	int		s_c;
	int		j;

	s_c = 0;
	if (allspace(s) == 1)
		return (ft_strnew(0));
	if (s == NULL)
		return (NULL);
	j = strlen(s);
	while (ft_space(s[s_c]) == 1 && s[s_c] != '\0')
		s_c++;
	while (ft_space(s[j]) == 1 && j >= 0)
		j--;
	str = (char *)malloc(sizeof(char) * (j - s_c) + 2 * sizeof(char));
	if (str == NULL || j - s_c <= 0)
		return (str);
	ft_copy(s, str, s_c, j);
	return (str);
}
