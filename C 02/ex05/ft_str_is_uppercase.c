/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llo-surd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:23:30 by llo-surd          #+#    #+#             */
/*   Updated: 2021/12/06 09:37:02 by llo-surd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}	
	i++;
	}
	return (1);
}

/*
#include <stdio.h>
int    main(void)
{
	int upper;
    char a[] = "HELLO";
	upper = ft_str_is_uppercase(a);
    printf("%d\n", upper);
}
*/
