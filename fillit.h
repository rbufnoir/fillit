/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 11:07:38 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/30 12:52:24 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

int	ft_closest_sqrt(int nbr);
int	ft_size_map_max(int nbr_tetri);
int	ft_size_map_min(int nbr_tetri);

int	ft_check_file(const char *file, char ***tab);

#endif
