/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:41:58 by aachfenn          #+#    #+#             */
/*   Updated: 2022/10/20 17:57:23 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t ds)
{
	size_t	d;
	size_t	s;
	size_t	i;
	size_t	j;

	if ((!dst) && ds == 0)
	{
		return (0);
	}
	s = ft_strlen(src);
	d = ft_strlen(dst);
	i = 0;
	j = d;
	if (d >= ds || ds == 0)
	{
		return (s + ds);
	}
	while (src[i] && i < ds - d - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (d + s);
}
