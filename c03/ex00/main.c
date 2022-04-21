/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:48:13 by meltremb          #+#    #+#             */
/*   Updated: 2022/01/31 09:51:23 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*str1 = "4";
	char	*str2 = "4";
   	int	res;

	res = ft_strcmp(str1, str2);
	ft_strcmp(str1, str2);
	printf("%d", res);
	return (0);
}
