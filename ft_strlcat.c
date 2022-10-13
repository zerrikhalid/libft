/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:35:04 by kzerri            #+#    #+#             */
/*   Updated: 2022/10/10 02:30:37 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (*(src + i))
		i++;
	if (dstsize == 0)
		return (i);
	while (*(dst + j))
		j++;
	while (j + k < dstsize)
	{
		*(dst + (j + k)) = *(src + k);
		k++;
	}
	*(dst + (j + k)) = '\0';
	return (j + i);
}
