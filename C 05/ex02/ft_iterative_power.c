/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llo-surd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:42:10 by llo-surd          #+#    #+#             */
/*   Updated: 2021/12/09 16:47:29 by llo-surd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		while (power > 0)
		{
			n *= nb;
			power --;
		}
		return (n);
	}
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_iterative_power(2,5));
}
*/
