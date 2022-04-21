/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:13:55 by meltremb          #+#    #+#             */
/*   Updated: 2022/02/07 12:40:18 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

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
