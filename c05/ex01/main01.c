/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:02:44 by meltremb          #+#    #+#             */
/*   Updated: 2022/02/01 10:14:53 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(42));
	printf("%d\n", ft_recursive_factorial(10));
	return (0);
}
