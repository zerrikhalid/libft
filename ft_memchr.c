/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 02:03:22 by kzerri            #+#    #+#             */
/*   Updated: 2022/11/05 21:51:06 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	int				i;

	i = 0;
	if (!s)
		return (NULL);
	p = (unsigned char *)s;
	while (n--)
	{
		if (*(p + i) == (unsigned char)c)
			return (p + i);
		i++;
	}
	return (NULL);
}
