/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 19:28:38 by jking-ye          #+#    #+#             */
/*   Updated: 2021/07/03 02:13:17 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned long	ft_strlcpy(char *dest, char *src, unsigned int l)
{
	unsigned int	i;
	unsigned int	destlen;
	unsigned int	srclen;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	while (i < (l - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}

char	**stringtowords(char **ptr, char *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i + 1] != c && s[i + 1] != '\0')
			j++;
		else
		{
			ptr[k] = (char *)malloc(j + 1);
			if (i - j == 0)
				j++;
			ft_strlcpy(ptr[k], &s[i - j + 1], j + 1);
			k++;
			j = 0;
		}
		i++;
	}
	return (ptr);
}

char	**ft_split(char *s, char c)
{
	char	**ptr;
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != '\0')
			j++;
		i++;
	}
	ptr = (char **)malloc(j * 8);
	ptr = stringtowords(ptr, s, c);
	return (ptr);
}
