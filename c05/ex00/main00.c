/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:54:44 by meltremb          #+#    #+#             */
/*   Updated: 2022/02/01 10:01:56 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(42));
	printf("%d\n", ft_iterative_factorial(10));
	return (0);
}
