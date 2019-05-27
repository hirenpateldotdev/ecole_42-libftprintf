/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 12:13:38 by hirenpat          #+#    #+#             */
/*   Updated: 2019/05/11 17:50:44 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define MAX_FD 4096
# define BUFF_SIZE 36
# define INVALID_FD(fd)  (((fd) < 0 || (fd) > 4096) ? 1 : -1)

# include "unistd.h"
# include "stdio.h"
# include "libft/libft.h"

int get_next_line(const int fd, char **line);

#endif
