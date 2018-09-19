/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 08:25:04 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/28 15:07:13 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			find_newline(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\n' && s[i] != '\0')
		i++;
	return (i);
}

char		*ft_djoin(char *s1, char *s2)
{
	char	*fresh;
	size_t	sa;
	size_t	sb;

	sb = 0;
	sa = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(fresh = (char*)malloc(sizeof(ft_strlen(s1) + ft_strlen(s2)))))
		return (NULL);
	while (s1[sa])
	{
		fresh[sa] = s1[sa];
		sa++;
	}
	free(s1);
	while (s2[sb])
	{
		fresh[sa++] = s2[sb];
		sb++;
	}
	fresh[sa] = '\0';
	return (fresh);
}

char		*get_line(char **store, char **line, int fd)
{
	char	*newstore;
	size_t	i;

	i = find_newline(store[fd]);
	*line = ft_strsub(store[fd], 0, i);
	if (ft_strcmp(store[fd], *line) == 0)
		store[fd] = NULL;
	else
	{
		newstore = store[fd];
		store[fd] = ft_strsub(store[fd], i + 1, ft_strlen(store[fd] + i + 1));
		free(newstore);
	}
	return (store[fd]);
}

int			get_next_line(int fd, char **line)
{
	char			buff[BUFF_SIZE + 1];
	static char		*store[1000];
	int				nbytes;

	if (BUFF_SIZE <= 0 || fd < 0 || !line || read(fd, NULL, 0) < 0)
		return (-1);
	if (store[fd] == NULL)
		store[fd] = ft_strnew(0);
	while ((nbytes = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[nbytes] = '\0';
		store[fd] = ft_djoin(store[fd], buff);
		if (ft_strchr(buff, '\n') != NULL)
			break ;
	}
	if (nbytes < BUFF_SIZE && (!(ft_strlen(store[fd]))))
		return (0);
	store[fd] = get_line(store, line, fd);
	return (1);
}
