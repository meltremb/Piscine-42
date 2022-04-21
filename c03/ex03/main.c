/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:09:05 by meltremb          #+#    #+#             */
/*   Updated: 2022/01/27 11:31:23 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	unsigned int	nb;
	char	str1[50] = "Dinosaurs ";
	char	*str2 = "are cool, bro";
	
	nb = 8;
	printf("%s", ft_strncat(str1, str2, nb));
	return (0);
}
