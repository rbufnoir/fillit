/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 11:08:07 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/30 10:55:55 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int main(int argc, char **argv)
{
	char	**tab;

	if (argc != 2)
		ft_putendl("usage: ./fillit [file]");
	else
	{
		if (ft_check_file(argv[1], &tab) == -1)
			ft_putendl("error");
		else
		{
			ft_putendl("Everything's fine");
			//On lance la suite du bazar!!!
		}
	}
}
