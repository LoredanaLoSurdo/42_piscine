/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llo-surd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 10:17:16 by llo-surd          #+#    #+#             */
/*   Updated: 2021/12/07 10:43:12 by llo-surd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while ((s1[x] || s2[x]) && (x < n))
	{
		if (s1[x] < s2[x])
		{
			return (-1);
		}		
		if (s1[x] > s2[x])
		{
			return (1);
		}
		x++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	int strncmp;
	int n = 5;

	char a[] = "abcdefg";
	char b[] = "abcdefG";
	strncmp = ft_strncmp(a, b, n);
	printf("%d\n", strncmp);
	return (0);
}
*/
