/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:14:44 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/07 14:21:30 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*b_s1;
	const char	*b_s2;
	size_t		i;

	b_s1 = (const char*)s1;
	b_s2 = (const char*)s2;
	i = 0;
	while (i < n)
	{
		if (b_s1[i] != b_s2[i])
			return ((unsigned char)b_s1[i] - (unsigned char)b_s2[i]);
		i++;
	}
	return (0);
}
