/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:03:47 by kzerri            #+#    #+#             */
/*   Updated: 2022/10/24 01:39:12 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*convert(char *s, unsigned int n, long int l)
{
	while (n != 0)
	{
		s[l - 1] = 48 + (n % 10);
		n /= 10;
		l--;
	}
	return (s);
}

static	long	int	count_nbr(int n)
{
	int	k;

	k = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		k = 1;
	while (n != 0)
	{
		n /= 10;
		k++;
	}
	return (k);
}

char	*ft_itoa(int n)
{
	char				*p;
	unsigned int		nb;
	long int			l;

	l = count_nbr(n);
	p = (char *)malloc(sizeof(char) * (l + 1));
	if (!p)
		return (NULL);
	p[l] = '\0';
	if (n == 0)
	{
		p[l - 1] = 48;
		return (p);
	}
	else if (n < 0)
	{
		nb = n * (-1);
		p[0] = '-';
	}
	else
		nb = n;
	p = convert(p, nb, l);
	return (p);
}
