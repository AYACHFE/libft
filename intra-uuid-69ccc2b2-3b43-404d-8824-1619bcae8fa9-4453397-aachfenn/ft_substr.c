/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:41:00 by aachfenn          #+#    #+#             */
/*   Updated: 2022/10/21 13:24:19 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int			i;
	int			l;
	size_t		len_s;
	const char	*ss;
	char		*p;

	if (!s)
		return (0);
	ss = s;
	len_s = ft_strlen(s);
	i = 0;
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > len_s)
		len = len_s - start;
	p = malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	l = (int)len;
	while (l > i)
	{
		p[i++] = ss[start++];
	}
	p[i] = '\0';
	return (p);
}
