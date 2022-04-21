/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:40:29 by meltremb          #+#    #+#             */
/*   Updated: 2022/02/01 13:04:52 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("%d\n", ft_is_prime(251));
	printf("%d\n", ft_is_prime(8));
	return (0);
}
