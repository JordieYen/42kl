/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 13:52:38 by jking-ye          #+#    #+#             */
/*   Updated: 2021/06/30 14:16:40 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strtrim(char *s, char *set)
{
	char	*ptr;
	int		i;
	int		j;
	int		k;
	int		ignore;

	i = 0;
	while (s[i] != '\0')
		i++;
	ptr = malloc(i);
	i = -1;
	k = 0;
	while (s[i++] != '\0')
	{
		j = 0;
		ignore = 0;
		while (set[j] != '\0')
		{
			if (s[i] == set[j++])
				ignore = 1;
		}
		if (ignore == 0)
			ptr[k++] = s[i];
	}
	return (ptr);
}
