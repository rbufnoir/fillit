/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:58:40 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/07 11:14:58 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	l_dst;
	size_t	l_src;

	l_dst = ft_strlen(dst);
	l_src = ft_strlen(src);
	if (size <= l_dst)
		return (size + l_src);
	if (l_src < size - l_dst)
	{
		ft_memcpy(dst + l_dst, src, l_src);
		dst = dst + l_dst + l_src;
	}
	else
	{
		ft_memcpy(dst + l_dst, src, size - l_dst - 1);
		dst = dst + size - 1;
	}
	*dst = '\0';
	return (l_dst + l_src);
}
