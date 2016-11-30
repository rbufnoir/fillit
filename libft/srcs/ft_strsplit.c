/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <rbufnoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:39:48 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/14 10:22:13 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbrword(const char *str, char c)
{
	int			i;
	int			ret;

	i = 0;
	ret = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
			ret++;
		while (str[i] != c && str[i] != '\0')
			i++;
		if (str[i] != '\0')
			i++;
	}
	return (ret);
}

static char		*ft_get_next_word(const char **str, char c)
{
	int			i;
	int			j;
	char		*ret;
	char		*tmp;

	i = 0;
	j = 0;
	tmp = (char*)*str;
	while (tmp[i] == c)
	{
		tmp++;
		j++;
	}
	while (tmp[i] != c && tmp[i] != '\0')
		i++;
	ret = (char*)malloc((i + 1) * sizeof(char));
	ft_strncpy(ret, tmp, i);
	ret[i] = '\0';
	*str += (i + j);
	return (ret);
}

char			**ft_strsplit(const char *str, char c)
{
	int			i;
	int			len;
	char		**tab;

	if (str == NULL)
		return (NULL);
	len = ft_nbrword(str, c);
	tab = (char**)malloc((len + 1) * sizeof(char*));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tab[i] = ft_get_next_word(&str, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
