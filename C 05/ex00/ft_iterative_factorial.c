/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llo-surd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:14:25 by llo-surd          #+#    #+#             */
/*   Updated: 2021/12/09 14:01:34 by llo-surd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (n > 1)
	{
		nb = nb * (n - 1);
		n--;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main()
{
	int	i;
	
	i = 7;
	printf("%d : %d\n", i, ft_iterative_factorial(i));
}
*/
