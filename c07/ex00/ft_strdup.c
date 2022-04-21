/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:00:45 by meltremb          #+#    #+#             */
/*   Updated: 2022/02/07 11:45:10 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *src)
{
	char	*target;

	target = malloc(sizeof(src));
	ft_strcpy(target, src);
	if (target == NULL)
		return (NULL);
	return (target);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
