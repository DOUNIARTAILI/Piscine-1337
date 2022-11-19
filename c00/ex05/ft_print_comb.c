/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 18:55:07 by drtaili           #+#    #+#             */
/*   Updated: 2022/06/12 19:24:36 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1 ;
		while (j <= '8')
		{
			k = j + 1 ;
			while (k <= '9')
			{
				ft_putchar (i, j, k);
				if (i != '7')
				{
					write (1, ", ", 2);
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
