/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:49:30 by meltremb          #+#    #+#             */
/*   Updated: 2022/01/26 13:22:38 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{	
	char	*str1 = "adlr;kgh;diklrztgjn";
	char	str2[20];

	ft_strcpy(str2, str1);
	printf("%s", str2);
	return (0);
}
