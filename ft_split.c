/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:18:33 by jking-ye          #+#    #+#             */
/*   Updated: 2021/07/21 11:31:06 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	useless(int i, int j)
{
	i++;
	j++;
}

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

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**ptr;

	i = 0;
	k = 0;
	ptr = malloc((wordcount(s, c) + 1) * 8);
	if (!ptr || !s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + 1] != c && s[i + 1] != '\0')
				useless(i++, j++);
			ptr[k] = malloc(j);
			ft_strlcpy(ptr[k++], &(s[i - j]), j + 2);
		}
		i++;
	}
	ptr[k] = 0;
	return (ptr);
}
