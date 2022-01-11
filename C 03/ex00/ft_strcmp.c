/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llo-surd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:31:32 by llo-surd          #+#    #+#             */
/*   Updated: 2021/12/08 13:11:01 by llo-surd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*s1, char	*s2)
{
	int	x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0' && (s1[x] == s2[x]))
	{
		x++;
	}
	if (s1[x] < s2[x])
	{	
		return (-1);
	}
	if (s1[x] > s2[x])
	{
		return (1);
	}		
	return (0);
}
/*
#include <stdio.h>
int main()
{
	int	strcmp;

	char a[] = "abc";
	char b[] = "abcd";
	strcmp = ft_strcmp(a, b);
	printf("%d\n", strcmp);
	return (0);
}
*/
