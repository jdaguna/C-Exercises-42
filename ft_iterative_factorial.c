/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaguna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 17:00:38 by jdaguna           #+#    #+#             */
/*   Updated: 2018/01/13 20:24:56 by jdaguna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;
	int i;

	result = 1;
	i = 1;
	if (nb >= 0 && nb < 13)
	{
		while (i <= nb)
		{
			result *= i;
			i++;
		}
		return (result);
	}
	else
	{
		return (0);
	}
}
