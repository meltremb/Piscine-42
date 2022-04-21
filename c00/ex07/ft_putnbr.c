/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:37:24 by meltremb          #+#    #+#             */
/*   Updated: 2022/01/21 13:09:58 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);

int		ft_howlong(int nb);

void	ft_putnbr(int nb)
{
	int	length;

	length = ft_howlong(nb);
	while (length != 0)
	{
		ft_putchar(nb / length + '0');
		nb = nb % length;
		length = length / 10;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_howlong(int nb)
{
	int	value;

	value = 1;
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		value = value * 10;
	}
	return (value);
}
