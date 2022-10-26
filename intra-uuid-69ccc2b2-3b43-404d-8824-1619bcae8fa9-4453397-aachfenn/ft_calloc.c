/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:09:41 by aachfenn          #+#    #+#             */
/*   Updated: 2022/10/20 17:58:30 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s1;

	if (count > 65521 && size > 65521)
		return (0);
	s1 = (char *)malloc(count * size);
	if (!s1)
	{
		return (NULL);
	}
	return (ft_memset(s1, 0, size * count));
}
