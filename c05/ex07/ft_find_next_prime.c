/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:07:41 by meltremb          #+#    #+#             */
/*   Updated: 2022/02/07 14:07:57 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (nb)
	{
		if (nb % 2 == 0)
			nb++;
		if (ft_is_prime(nb))
			return (nb);
		else
			nb++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
