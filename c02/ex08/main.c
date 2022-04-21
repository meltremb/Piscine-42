/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:51:34 by meltremb          #+#    #+#             */
/*   Updated: 2022/01/26 13:05:21 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	*str = "UWU12LOL";

	ft_strlowcase(str);
	printf("%s", str);
	return (0);
}
