/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaguna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 21:55:06 by jdaguna           #+#    #+#             */
/*   Updated: 2018/01/16 22:01:36 by jdaguna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if ((str[0] >= 97) && (str[0] <= 122))
	{
		str[0] -= 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && ((str[i - 1] == ' ') ||
			(str[i - 1] == '-') || (str[i - 1] == '+')))
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && str[i - 1] != ' ')
			str[i] = str[i] + 32;
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}

int main(void)
{
	char a[] = "+bullshit";
	char b[] = "-bullshit";
	printf("%s\n", ft_strcapitalize(a));
	printf("%s\n", ft_strcapitalize(b));
}