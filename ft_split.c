/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:18:33 by jking-ye          #+#    #+#             */
/*   Updated: 2021/07/29 10:58:19 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	wordcount(const char *s, char c)
{
	int	i;
	int	count;
	int	isword;

	i = 0;
	count = 0;
	isword = 0;
	while (s[i] != '\0')
	{
		if (isword == 0 && s[i] != c)
		{
			count++;
			isword = 1;
		}
		else if (s[i] == c)
			isword = 0;
		i++;
	}
	return (count);
}

static int wordlen(const char *str, char c)
{
	int i;

	i = 0;
	while (str[i + 1] != c && str[i + 1] != '\0')
		i++;
	return (i);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**ptr;

	i = 0;
	k = 0;
	if (!s)
		return (0);
	ptr = ft_calloc((wordcount(s, c) + 1), 8);
	if (!ptr)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j = wordlen(s + i, c);
			i = i + j;
			ptr[k] = malloc(j);
			ft_strlcpy(ptr[k++], &(s[i - j]), j + 2);
		}
		i++;
	}
	return (ptr);
}
