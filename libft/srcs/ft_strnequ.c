/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:44:32 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/07 15:17:04 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (s1 != NULL && s2 != NULL)
		return ((ft_strncmp(s1, s2, n)) ? 0 : 1);
	return (1);
}