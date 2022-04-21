/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:54:25 by meltremb          #+#    #+#             */
/*   Updated: 2022/02/03 13:21:02 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i > 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
