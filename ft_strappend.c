/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marcin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 12:13:33 by hirenpat          #+#    #+#             */
/*   Updated: 2019/05/11 17:50:39 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_strappend(char **str, char *sub)
{
	char		*temp;

	temp = ft_strjoin(*str, sub);
	free(*str);
	*str = temp;
}
