/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:51:27 by meltremb          #+#    #+#             */
/*   Updated: 2022/01/20 14:27:18 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>

void	ft_print_numbers(void)
{
	char	a;

	a = '0';
	while (a <= '9' && a >= '0')
	{
		write (1, &a, 1);
		a++;
	}
}
