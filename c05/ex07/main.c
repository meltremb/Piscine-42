/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:08:08 by meltremb          #+#    #+#             */
/*   Updated: 2022/02/03 13:26:08 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("%d\n", ft_find_next_prime(8));
	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(-8));
	return (0);
}
