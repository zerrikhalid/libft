/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 05:08:10 by kzerri            #+#    #+#             */
/*   Updated: 2022/10/29 02:46:23 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(const	char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] == '0')
		i++;
	while (str[i + j] && (str[i + j] >= '0' && str[i + j] <= '9'))
		j++;
	return (j);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			s;
	long long	nb;

	i = 0;
	s = 1;
	nb = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (*(str + i) == '+' || *(str + i) == '-')
	{
		if (*(str + i) == '-')
			s *= (-1);
		i++;
	}
	if (ft_nbrlen(str + i) > 19 && s < 0)
		return (0);
	else if (ft_nbrlen(str + i) > 19)
		return (-1);
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * s);
}
