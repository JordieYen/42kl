/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 01:05:52 by jking-ye          #+#    #+#             */
/*   Updated: 2021/07/03 02:12:39 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*numtostring(int i, long k, int isneg, char *ptr)
{
	ptr[i + 1] = '\0';
	i--;
	while (i >= 0)
	{
		if (isneg == 1 && i == 0)
			ptr[i] = '-';
		else
			ptr[i] = 48 + (k % 10);
		k = k / 10;
		i--;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	long	j;
	long	k;
	int		isneg;

	i = 0;
	isneg = 0;
	k = n;
	if (k < 0)
	{
		i = 1;
		isneg = 1;
		k = k * -1;
	}
	j = k;
	while (j >= 1)
	{
		j = j / 10;
		i++;
	}
	ptr = malloc(i + 1);
	ptr = numtostring(i, k, isneg, ptr);
	return (ptr);
}
