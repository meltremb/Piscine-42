/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:24:08 by meltremb          #+#    #+#             */
/*   Updated: 2022/02/07 15:37:04 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int ft_range(int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	range = malloc(sizeof(max - min));
	return (range);
}

int	*ft_range(int min, int max)
{
	int	*tab;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(max - min));
	while (min < max)
	{
		tab[min] = min;
		min++;
	}
	return (tab);
}
