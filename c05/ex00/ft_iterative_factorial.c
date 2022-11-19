/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:28:36 by drtaili           #+#    #+#             */
/*   Updated: 2022/06/25 19:48:01 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0)
		return (1);
	else if (nb == 1)
		return (1);
	else if (nb > 1)
	{
		while (i > 0)
		{
			nb = nb * i;
			i--;
		}
		return (nb);
	}
	else
		return (0);
}
