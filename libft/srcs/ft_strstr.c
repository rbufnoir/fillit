/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:16:05 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/14 10:47:59 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	j;

	if (ft_strcmp(little, "") == 0)
		return ((char*)big);
	i = 0;
	j = ft_strlen(little);
	while (big[i] != '\0')
	{
		if (ft_strncmp(big + i, little, j) == 0)
			return ((char*)&big[i]);
		i++;
	}
	return (NULL);
}
