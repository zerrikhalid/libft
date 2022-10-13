/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 01:41:40 by kzerri            #+#    #+#             */
/*   Updated: 2022/10/13 18:33:42 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && i < n)
		i++;
	if ((*(s1 + i) - *(s2 + i)) == 0)
		return (0);
	else if ((*(s1 + i) - *(s2 + i)) > 0)
		return (1);
	return (-1);
}
