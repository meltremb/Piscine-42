/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:40:38 by meltremb          #+#    #+#             */
/*   Updated: 2022/02/01 11:17:07 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("%d\n", ft_recursive_power(-8, 5));
	printf("%d\n", ft_recursive_power(5, 0));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(5, 5));
	printf("%d\n", ft_recursive_power(5, -3));
	return (0);
}
