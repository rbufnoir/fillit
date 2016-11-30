/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:22:36 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/14 10:47:26 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (ft_strcmp(little, "") == 0)
		return ((char*)big);
	i = 0;
	j = ft_strlen(little);
	while (big[i] != '\0' && len >= j)
	{
		if (ft_strncmp(&big[i], little, j) == 0)
			return ((char*)&big[i]);
		i++;
		len--;
	}
	return (NULL);
}
