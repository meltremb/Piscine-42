/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:50:10 by meltremb          #+#    #+#             */
/*   Updated: 2022/01/26 13:04:16 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	int		res;
	char	*str = "a";

	res = ft_str_is_alpha(str);
	ft_str_is_alpha(str);
	printf("%d", res);
	return (0);
}
