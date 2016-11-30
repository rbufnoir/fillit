/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 09:51:43 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/14 10:02:22 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*b_dst;
	char		*b_src;
	size_t		i;

	b_dst = (char*)dst;
	b_src = (char*)src;
	i = 0;
	while (i < n)
	{
		b_dst[i] = b_src[i];
		i++;
	}
	return (dst);
}
