/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:35:04 by kzerri            #+#    #+#             */
/*   Updated: 2022/10/24 00:37:45 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(src);
	k = 0;
	if (dstsize == 0)
		return (i);
	j = ft_strlen(dst);
	if (dstsize <= j)
		return (i + dstsize);
	while ((j + k < dstsize - 1) && src[k])
	{
		*(dst + (j + k)) = *(src + k);
		k++;
	}
	*(dst + (j + k)) = '\0';
	return (j + i);
}
