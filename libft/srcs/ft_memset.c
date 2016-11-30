/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 09:41:38 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/07 09:48:31 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*buff;
	size_t	i;

	buff = (char*)b;
	i = 0;
	while (i < len)
	{
		buff[i] = c;
		i++;
	}
	return (b);
}
