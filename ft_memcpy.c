/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:33:29 by kzerri            #+#    #+#             */
/*   Updated: 2022/10/26 18:31:14 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*pdest;
	unsigned const char	*psrc;

	pdest = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (pdest == psrc)
		return (dst);
	while (n--)
		*(pdest++) = *(psrc++);
	return (dst);
}
