/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:35:47 by aachfenn          #+#    #+#             */
/*   Updated: 2022/10/20 17:57:09 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	h = (char *) haystack;
	n = (char *) needle;
	j = 0;
	i = 0;
	if (n[j] == '\0')
		return (h);
	while (h[i] != '\0' && i < len)
	{
		j = 0;
		while (h[i + j] == n[j] && i + j < len && j <= ft_strlen(needle))
		{
			j++;
			if (n[j] == '\0')
			{
				return (&h[i]);
			}
		}
		i++;
	}
	return (0);
}
