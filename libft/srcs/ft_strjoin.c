/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:57:11 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/07 13:31:54 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ret;
	size_t	l1;
	size_t	l2;

	if (s1 != NULL && s2 != NULL)
	{
		l1 = ft_strlen(s1);
		l2 = ft_strlen(s2);
		ret = ft_strnew(l1 + l2 + 1);
		if (ret == NULL)
			return (NULL);
		ret = ft_strcpy(ret, s1);
		ret = ft_strcat(ret, s2);
		return (ret);
	}
	return (NULL);
}
