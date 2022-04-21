/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:57:51 by meltremb          #+#    #+#             */
/*   Updated: 2022/01/21 13:11:28 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar((a / 10) + 48);
			ft_putchar((a % 10) + 48);
			write (1, " ", 1);
			ft_putchar((b / 10) + 48);
			ft_putchar((b % 10) + 48);
			if (a < 98)
				write (1, ", ", 2);
			b++;
		}
		if (b == 99)
			b = 0;
			a++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
