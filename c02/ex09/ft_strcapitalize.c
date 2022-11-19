/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 02:39:07 by drtaili           #+#    #+#             */
/*   Updated: 2022/06/21 23:32:53 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 90 && str[i] >= 65)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_firstword(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (str);
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
			break ;
		}
		else
			i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	ft_firstword(str);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			if ((str[i] < 'a' || str[i] > 'z'))
			{
				if (str[i] < 'A' || str[i] > 'Z')
				{
					if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
						str[i + 1] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
