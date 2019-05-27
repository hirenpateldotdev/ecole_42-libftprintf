/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_todest.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marcin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 12:13:33 by hirenpat          #+#    #+#             */
/*   Updated: 2019/05/11 17:50:39 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_strtrim_todest(char **dest, char **src, int start, int end)
{
	char		*temp;

	*dest = ft_strsub(*src, start, end);
	temp = ft_strdup(*src + end + 1);
	free(*src);
	*src = temp;
	if (*src[0] == '\0')
		ft_strdel(src);
}
