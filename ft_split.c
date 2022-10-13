/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:28:20 by kzerri            #+#    #+#             */
/*   Updated: 2022/10/13 20:50:34 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(char const *s1, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s1[i] == c)
		i++;
	if (s1[i] == '\0')
		return (count);
	while (s1[i] != c)
	{
		if (s1[i] == '\0')
			break ;
		i++;
	}
	count += 1;
	return (count + count_words(s1 + i, c));
}

static	int	count_lenght(char const *s1, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (*(s1 + k) == c)
		k++;
	while (*(s1 + k) != c)
	{
		if (*(s1 + k) == '\0')
			break ;
		k++;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**p;

	p = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	j = 0;
	i = 0;
	p[count_words(s, c)] = NULL;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		p[j] = (char *)malloc(sizeof(char) * count_lenght(&s[i], c) + 1);
		k = 0;
		while (s[i])
		{
			if (s[i] == c || s[i] == '\0')
				break ;
			p[j][k] = s[i];
			k++;
			i++;
		}
		p[j][k] = '\0';
		j++;
	}
	return (p);
}

int main()
{
    char str[] = "learning|||||||is|funny|as||||||||fuck||||";
    char **p = ft_split(str, '|');
	int i = 0;
	while(p[i]) {
	printf("%s\n", p[i]); i++;
	}
}