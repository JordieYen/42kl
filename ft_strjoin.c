/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:21:31 by jking-ye          #+#    #+#             */
/*   Updated: 2021/06/28 19:32:28 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr;
	int		i;
	int		lenone;
	int		lentwo;

	i = 0;
	lenone = 0;
	lentwo = 0;
	while (s1[lenone] != '\0')
		lenone++;
	while (s2[lentwo] != '\0')
		lentwo++;
	ptr = malloc(lenone +lentwo);
	while (i < lenone)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < lentwo)
	{
		ptr[lenone + i] = s2[i];
		i++;
	}
	return (ptr);
}
