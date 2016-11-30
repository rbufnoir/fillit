/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:34:11 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/07 14:37:02 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*ret;
	size_t	l;
	size_t	i;

	if (s != NULL && f != NULL)
	{
		l = ft_strlen(s);
		ret = (char *)malloc(sizeof(char) * (l + 1));
		if (ret == NULL)
			return (NULL);
		i = 0;
		while (i < l)
		{
			ret[i] = (*f)(s[i]);
			i++;
		}
		ret[i] = '\0';
		return (ret);
	}
	return (NULL);
}
