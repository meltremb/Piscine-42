/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:59:29 by meltremb          #+#    #+#             */
/*   Updated: 2022/01/31 10:06:39 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	unsigned int	n;
	unsigned int	res;
	char	*str1 = "";
	char	*str2 = "56";

	n = 3;
	res = ft_strncmp(str1, str2, n);
	ft_strncmp(str1, str2, n);
	printf("%d", res);
	return (0);
}
