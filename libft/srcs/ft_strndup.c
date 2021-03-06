/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <rbufnoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 15:49:49 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/30 09:57:11 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strndup(char *str, int size)
{
	char	*ret;
	int		i;

	ret = (char*)malloc(sizeof(char) * (size + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && i < size)
	{
		ret[i] = str[i];
		i++;
	}
	ret[size] = '\0';
	return (ret);
}
