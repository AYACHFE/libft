/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:16:56 by aachfenn          #+#    #+#             */
/*   Updated: 2022/10/21 15:31:12 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (!(s))
	{
		return (0);
	}
	while (len >= 0)
	{
		if (s[len] == (char )c)
		{
			return ((char *)&s[len]);
		}
		len--;
	}
	return (0);
}
