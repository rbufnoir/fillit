/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:48:55 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/14 09:07:28 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;

	len1 = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0')
	{
		s1[len1 + i] = (char)s2[i];
		i++;
	}
	s1[len1 + i] = '\0';
	return (s1);
}
