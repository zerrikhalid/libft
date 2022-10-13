/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 01:00:15 by kzerri            #+#    #+#             */
/*   Updated: 2022/10/10 02:31:01 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)s;
	if (c == 0)
		return ("\0");
	while (*(p + i))
		i++;
	while (i--)
	{
		if (c == *(p + i))
			return (p + i);
	}
	return (NULL);
}
