/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:59:49 by aachfenn          #+#    #+#             */
/*   Updated: 2022/10/21 15:30:30 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_return(long nb, char *p, int i)
{
	char	num[12];
	int		j;

	j = 0;
	while (nb > 0)
	{
		num[j] = nb % 10 + '0';
		nb = nb / 10;
		j++;
	}
	while (j-- > 0)
		p[i++] = num[j];
	p[i] = '\0';
	return (p);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	nb = n;
	p = malloc(sizeof(char) * (len(nb) + 1));
	if (!p)
		return (0);
	i = 0;
	j = 0;
	if (nb == 0)
	{
		p[i++] = '0';
	}
	if (nb < 0)
	{
		nb *= -1;
		p[0] = '-';
		i++;
	}
	return (ft_return(nb, p, i));
}
