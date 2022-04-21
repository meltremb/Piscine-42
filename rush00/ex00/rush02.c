/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 09:33:34 by meltremb          #+#    #+#             */
/*   Updated: 2022/01/25 11:35:59 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);

void	writeab(int x, int y, int a, int b);

void	rush(int x, int y)
{
	int	a;
	int	b;

	if (x < 1 || y < 1)
		return ;
	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			writeab(x, y, a, b);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}

void	writeab(int x, int y, int a, int b)
{
	if ((b == 1) && (a == 1 || a == x))
		ft_putchar('A');
	else if ((a > 1 && a < x) && (b == 1 || b == y))
		ft_putchar('B');
	else if ((b > 1 && b < y) && (a == 1 || a == x))
		ft_putchar('B');
	else if (b == y && (a == 1 || a == x))
		ft_putchar('C');
	else
		ft_putchar(' ');
}
