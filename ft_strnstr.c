/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 04:26:52 by kzerri            #+#    #+#             */
/*   Updated: 2022/10/26 18:01:40 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (len == 0 && !haystack)
		return (NULL);
	if (*(needle) == '\0')
		return ((char *)haystack);
	while (*(haystack + i) && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && (i + j < len))
			j++;
		if (*(needle + j) == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
