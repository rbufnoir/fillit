/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:47:18 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/14 09:17:16 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	if (s != NULL)
	{
		ret = (char*)malloc(sizeof(char) * (len + 1));
		if (ret == NULL)
			return (NULL);
		i = 0;
		while (i < len)
		{
			ret[i] = s[start + i];
			i++;
		}
		ret[i] = '\0';
		return (ret);
	}
	return (NULL);
}
