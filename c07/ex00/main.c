/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:02:32 by meltremb          #+#    #+#             */
/*   Updated: 2022/02/04 13:37:14 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>
char	*ft_strdup(char *src);

int	main(void)
{
	char	src[] = "haha uwu lol";
	char	*target = ft_strdup(src);

	printf("%s", ft_strdup(target));
	free(target);
	return (0);
}
