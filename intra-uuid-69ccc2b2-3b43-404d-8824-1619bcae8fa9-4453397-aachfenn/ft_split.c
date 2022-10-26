/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:01:36 by aachfenn          #+#    #+#             */
/*   Updated: 2022/10/21 17:56:23 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(const char *s, char c)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			word++;
		while (s[i] && c != s[i])
			i++;
	}
	return (word);
}

static	int	countlen(const char *s, char c, int i)
{
	int	count;

	count = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		count++;
	}
	return (count);
}

static	void	print(char **res, const char *s, char c)
{
	int		k;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] == c)
			i++;
		if (s[i])
		{
			res[j] = (char *)malloc(countlen(s, c, i) + 1);
			if (!res[j])
				return ;
			while (s[i] && s[i] != c)
				res[j][k++] = s[i++];
			res[j++][k] = '\0';
		}
	}
	res[j] = NULL;
}

char	**ft_split(const char *s, char c)
{
	char	**res;

	res = (char **)malloc((count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	print(res, s, c);
	return (res);
}
