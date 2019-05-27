/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marcin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 12:13:33 by hirenpat          #+#    #+#             */
/*   Updated: 2019/05/11 17:50:39 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_read(int fd, char *buffer, int buff_size)
{
	int			return_value;

	return_value = read(fd, buffer, buff_size);
	buffer[return_value] = '\0';
	return (return_value);
}
