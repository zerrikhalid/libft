/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 04:26:52 by kzerri            #+#    #+#             */
/*   Updated: 2022/10/09 05:07:33 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*(needle) == '\0')
		return (haystack);
	while (*(haystack + i) && len--)
	{
		while (*(haystack + (i + j)) == *(needle + j))
			j++;
		if (*(needle + j) == '\0')
			return (haystack + i);
		j = 0;
		i++;
	}
}
