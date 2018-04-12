/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaguna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 17:50:03 by jdaguna           #+#    #+#             */
/*   Updated: 2018/01/13 17:50:27 by jdaguna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 13)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
	{
		return (0);
	}
	return (0);
}
