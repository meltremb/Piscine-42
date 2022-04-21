/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:39:25 by meltremb          #+#    #+#             */
/*   Updated: 2022/01/27 11:24:04 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	str1[50] = "I love my girlfriend ";
	char	*str2 = "and I'm a big simp";

	printf("%s", ft_strcat(str1, str2));
	return (0);

}
