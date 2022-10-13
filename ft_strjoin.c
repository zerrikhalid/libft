/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:10:11 by kzerri            #+#    #+#             */
/*   Updated: 2022/10/10 21:24:44 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*p;

	j = 0;
	if (!s1 || !s2)
		return (NULL);
	i = (ft_strlen(s1) + ft_strlen(s2));
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (!p)
		return (NULL);
	while (s1[j])
	{
		p[j] = s1[j];
		j++;
	}
	i = 0;
	while (s2[i])
	{
		p[j + i] = s2[i];
		i++;
	}
	p[j + i] = '\0';
	return (p);
}
