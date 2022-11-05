/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 03:03:11 by kzerri            #+#    #+#             */
/*   Updated: 2022/11/05 21:52:53 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	if (!b)
		return (NULL);
	p = (unsigned char *)b;
	while (len--)
	{
		*p = (unsigned char)c;
		p++;
	}
	return (b);
}
