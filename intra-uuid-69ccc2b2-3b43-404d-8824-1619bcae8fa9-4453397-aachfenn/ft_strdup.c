/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:03:58 by aachfenn          #+#    #+#             */
/*   Updated: 2022/10/20 17:57:32 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ss1;

	i = 0;
	while (s1[i])
	{
		i++;
	}
	ss1 = malloc((i + 1) * (sizeof(char)));
	if (!ss1)
		return (0);
	i = 0;
	while (s1[i])
	{
		ss1[i] = s1[i];
		i++;
	}
	ss1[i] = '\0';
	return (ss1);
}
