/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:54:39 by meltremb          #+#    #+#             */
/*   Updated: 2022/01/27 14:40:28 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str = "WAS THAT THE BITE OF 87?!?";

	printf("%d", ft_strlen(str));
	return (0);
}
