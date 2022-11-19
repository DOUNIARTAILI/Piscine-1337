/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 01:34:38 by drtaili           #+#    #+#             */
/*   Updated: 2022/06/29 19:18:50 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_weed(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	weed_size;

	i = 0;
	weed_size = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			weed_size++;
			j++;
		}
		i++;
	}
	return (weed_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total;
	char	*str;

	if (size == 0)
	{
		str = (char *)malloc(1);
		*str = 0;
		return (str);
	}
	i = 0;
	total = ft_weed(size, strs, sep);
	str = malloc(sizeof(char) * total + 1);
	str[0] = '\0';
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i < size - 1)
		{
			str = ft_strcat(str, sep);
		}
		i++;
	}
	return (str);
}
