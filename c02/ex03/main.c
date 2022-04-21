/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:11:09 by meltremb          #+#    #+#             */
/*   Updated: 2022/01/26 13:04:30 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	int	res;
	char *str = "d";

	res = ft_str_is_numeric(str);
	ft_str_is_numeric(str);
	printf("%d", res);
	return (0);
}
