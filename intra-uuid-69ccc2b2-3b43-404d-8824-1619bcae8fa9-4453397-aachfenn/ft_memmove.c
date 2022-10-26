/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:47:18 by aachfenn          #+#    #+#             */
/*   Updated: 2022/10/21 10:25:23 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ds;
	char	*sr;

	ds = (char *)dest;
	sr = (char *)src;
	if (!ds && !sr)
	{
		return (0);
	}
	if (sr < ds)
	{
		while (n--)
		{
			ds[n] = sr[n];
		}
	}
	else
	{
		ft_memcpy(ds, sr, n);
	}
	return (ds);
}
