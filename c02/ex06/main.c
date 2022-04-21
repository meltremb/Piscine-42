/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:04:43 by meltremb          #+#    #+#             */
/*   Updated: 2022/01/26 15:52:02 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_printable(char  *str);

int	main(void)
{
	int	res;
	char	*str = "\x03";

	res = ft_str_is_printable(str);
	printf("%d", res);

	return (0);
}
