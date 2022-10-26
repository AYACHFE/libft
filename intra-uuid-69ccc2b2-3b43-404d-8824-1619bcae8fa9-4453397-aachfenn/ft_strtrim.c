/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:24:23 by aachfenn          #+#    #+#             */
/*   Updated: 2022/10/21 16:26:37 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	int		i;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	first = 0;
	last = ft_strlen(s1) - 1;
	if (first == ft_strlen(s1))
		return (ft_strdup(""));
	while (ft_strchr(set, s1[first]) && s1[first])
		first++;
	while (ft_strrchr(set, s1[last]))
		last--;
	return (ft_substr(s1, first, last - first + 1));
}
