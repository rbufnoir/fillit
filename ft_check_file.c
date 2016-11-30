/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 11:15:30 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/30 10:51:30 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_check_tetrominos_char(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
			return (-1);
		i++;
	}
	return (0);
}

static char	**ft_tetrominos_split(char *str)
{
	char	**buff;
	int		size;
	int		i;
	int		j;

	size = (ft_strlen(str) + 1) / 21;
	buff = (char**)malloc(sizeof(char*) * size + 1);
	if (buff == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		buff[j] = ft_strndup(&str[i], 20);
		j++;
		i += 21;
	}
	buff[j] = NULL;
	return (buff);
}

static int	ft_check_tetrominos(char *tetri)
{
	int	i;
	int	count_backslash_n;
	int	count_hashtag;
	int number_link;

	i = 0;
	count_backslash_n = 0;
	count_hashtag = 0;
	number_link = 0;
	while (tetri[i] != '\0')
	{
		if (tetri[i] == '\n' && (i == 4 || i == 9 || i == 14 || i == 19))
			count_backslash_n++;
		if (tetri[i] == '#')
		{
			count_hashtag++;
			number_link += (tetri[i + 1] == '#') ? 1 : 0;
			number_link += (tetri[i + 5] == '#') ? 1 : 0;
		}
		i++;
	}
	if (count_backslash_n != 4 || count_hashtag != 4 || number_link < 3)
		return (-1);
	return (0);
}

int			ft_check_file(const char *file, char ***tab)
{
	int		i;
	int		fd;
	int		ret;
	char	**tmp;
	char	buff[547];

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (-1);
	if ((ret = read(fd, buff, 546)) == -1 || (ret + 1) % 21 != 0)
		return (-1);
	buff[ret] = '\0';
	if (ft_check_tetrominos_char(buff) == -1)
		return (-1);
	if ((tmp = ft_tetrominos_split(buff)) == NULL)
		return (-1);
	i = 0;
	while (tmp[i] != NULL)
	{
		if (ft_check_tetrominos(tmp[i]) == -1)
			return (-1);
		i++;
	}
	*tab = tmp;
	return (0);
}
