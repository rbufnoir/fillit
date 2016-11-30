/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tool.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 12:01:00 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/30 12:49:09 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_closest_sqrt(int nbr)
{
	int ret;

	ret = 0;
	while (ret * ret < nbr)
		ret++;
	return (ret);
}

int	ft_size_map_max(int nbr_tetri)
{
	return (ft_closest_sqrt(nbr_tetri * 4));
}

int	ft_size_map_min(int nbr_tetri)
{
	return (ft_closest_sqrt(nbr_tetri * 6));
}
