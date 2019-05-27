/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marcin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 12:13:33 by hirenpat          #+#    #+#             */
/*   Updated: 2019/05/11 17:50:39 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				get_next_line(const int fd, char **line)
{
	static char	*hm[MAX_FD];
	char		b[BUFF_SIZE + 1];
	int			i;
	int			end;

	if (INVALID_FD(fd) == 1 || line == NULL || read(fd, b, 0) < 0)
		return (-1);
	if (hm[fd] == NULL)
		hm[fd] = ft_strnew(1);
	while (ft_strchr(hm[fd], '\n') == 0 && (i = ft_read(fd, b, BUFF_SIZE)) > 0)
		ft_strappend(&hm[fd], b);
	if (i == 0 && (hm[fd] == NULL || hm[fd][0] == '\0'))
		return (0);
	end = ft_strchrn(hm[fd], '\n');
	if (hm[fd][end] == '\n')
		ft_strtrim_todest(&*line, &hm[fd], 0, end);
	else
	{
		if (BUFF_SIZE == i)
			return (get_next_line(fd, line));
		*line = ft_strdup(hm[fd]);
		ft_strdel(&hm[fd]);
	}
	return (1);
}
