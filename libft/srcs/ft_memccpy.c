/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 09:56:08 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/14 10:04:30 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*b_dst;
	unsigned char			*b_src;
	size_t					i;

	b_dst = (unsigned char*)dst;
	b_src = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		b_dst[i] = b_src[i];
		if (b_src[i] == (unsigned char)c)
			return (b_dst + i + 1);
		i++;
	}
	return (NULL);
}
