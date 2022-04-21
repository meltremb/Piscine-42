/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:15:27 by meltremb          #+#    #+#             */
/*   Updated: 2022/02/01 10:28:54 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("%d\n", ft_iterative_power(-8, 5));
	printf("%d\n", ft_iterative_power(5, 0));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(5, 5));
	printf("%d\n", ft_iterative_power(5, -3));
	return (0);
}
