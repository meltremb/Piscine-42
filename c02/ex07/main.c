/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:16:32 by meltremb          #+#    #+#             */
/*   Updated: 2022/01/26 13:05:08 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char *str = "uwu12lol";

    ft_strupcase(str);
	printf("%s", str);
	return (0);
}
