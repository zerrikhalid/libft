/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 02:07:36 by kzerri            #+#    #+#             */
/*   Updated: 2022/10/10 02:28:25 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*p;
	size_t	j;

	i = ft_strlen(s1);
	j = 0;
	p = (char *)malloc(sizeof(char) * (i + 1));
	while (j < i)
	{
		*(p + j) = *(s1 + j);
		j++;
	}
	*(p + j) = '\0';
	return (p);
}
