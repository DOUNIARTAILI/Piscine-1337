/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 01:30:21 by drtaili           #+#    #+#             */
/*   Updated: 2022/06/29 01:31:16 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*p;
	int	i;

	i = 0;
	size = max - min;
	if (min < max)
	{
		p = (int *) malloc(sizeof(int) * size);
		while (i < size)
		{
			p[i] = min + i;
			i++;
		}
		return (p);
	}
	else
		return (NULL);
}
