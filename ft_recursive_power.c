/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaguna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 18:04:38 by jdaguna           #+#    #+#             */
/*   Updated: 2018/01/13 18:04:43 by jdaguna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int result;

	result = nb;
	if (power == 0)
	{
		return (1);
	}
	else if (power > 0)
	{
		return (result *= ft_recursive_power(nb, power - 1));
	}
	else
	{
		return (0);
	}
	return (0);
}
