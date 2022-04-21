/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:57:29 by meltremb          #+#    #+#             */
/*   Updated: 2022/01/26 13:03:02 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	int	res;
	char	*str = "DKSJFGHN";

	res = ft_str_is_uppercase(str);
	printf("%d", res);
	return (0);
}
