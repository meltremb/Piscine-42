/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:50:45 by meltremb          #+#    #+#             */
/*   Updated: 2022/01/28 10:30:30 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long	i;

	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * -1;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		ft_putchar(i + 48);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
