/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaguna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 17:28:04 by jdaguna           #+#    #+#             */
/*   Updated: 2018/01/13 17:32:39 by jdaguna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;
	int i;

	result = nb;
	i = 1;
	if (power == 0)
	{
		return (1);
	}
	else if (power > 0)
	{
		while (i < power)
		{
			result *= nb;
			i++;
		}
		return (result);
	}
	else
	{
		return (0);
	}
	return (0);
}
