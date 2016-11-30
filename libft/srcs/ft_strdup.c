/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:22:48 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/14 10:36:32 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	size_t	l;

	l = ft_strlen(s1);
	ret = (char*)malloc(sizeof(char) * (l + 1));
	if (ret == NULL)
		return (NULL);
	ret = ft_strcpy(ret, s1);
	return (ret);
}
