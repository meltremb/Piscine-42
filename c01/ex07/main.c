/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 09:51:01 by meltremb          #+#    #+#             */
/*   Updated: 2022/02/03 10:15:45 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {1, 2, 3, 4};

	ft_rev_int_tab(tab, 4);
	return (0);
}