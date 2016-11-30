/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:12:43 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/14 09:14:24 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*v;
	char	*p_v;
	size_t	i;

	if (size == 0)
		return (NULL);
	v = (void*)malloc(sizeof(void) * size);
	if (v == NULL)
		return (NULL);
	p_v = (char*)v;
	i = 0;
	while (i < size)
	{
		p_v[i] = 0;
		i++;
	}
	return (v);
}
