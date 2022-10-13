/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:33:29 by kzerri            #+#    #+#             */
/*   Updated: 2022/10/13 10:31:28 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*pdest;
	unsigned const char	*psrc;

	if (!dst || !src)
		return (NULL);
	pdest = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	while (n--)
	{
		*(pdest++) = *(psrc++);
	}
	return (dst);
}
