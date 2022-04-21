/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:33:51 by meltremb          #+#    #+#             */
/*   Updated: 2022/01/27 13:35:59 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str1[40] = "like finding a noodle in a haystack";
    char	str2[10] = "noodle";

	printf("%s", ft_strstr(str1, str2));
	return (0);
}
