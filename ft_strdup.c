/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 16:46:56 by jking-ye          #+#    #+#             */
/*   Updated: 2021/06/27 17:11:17 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *s)
{
	char			*ptr;
	unsigned long	i;
	unsigned long	len;

	i = 0;
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	ptr = malloc(len);
	while (i < len)
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}
