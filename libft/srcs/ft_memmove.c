/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:02:48 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/07 14:50:30 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*b_dst;
	const char	*b_src;

	b_dst = (char*)dst;
	b_src = (const char*)src;
	if (b_src <= b_dst)
	{
		b_src += len - 1;
		b_dst += len - 1;
		while (len > 0)
		{
			*b_dst = *b_src;
			b_src--;
			b_dst--;
			len--;
		}
	}
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}
