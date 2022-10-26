/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:03:30 by aachfenn          #+#    #+#             */
/*   Updated: 2022/10/21 15:07:43 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*des;
	char	*sr;
	size_t	i;

	i = 0;
	des = dest;
	sr = (char *)src;
	if (!des && !src)
	{
		return (0);
	}
	while (n > i)
	{
		des[i] = sr[i];
		i++;
	}
	return (des);
}
