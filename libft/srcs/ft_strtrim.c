/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:03:55 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/14 10:34:57 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	i;
	size_t	len;
	char	*ret;

	if (s == NULL)
		return (NULL);
	while ((*s == ' ' || *s == '\n' || *s == '\t') && (*s != '\0'))
		s++;
	len = ft_strlen(s);
	if (len > 1)
		while ((s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
			&& (s[len - 1] != '\0'))
			len--;
	ret = (char*)malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);
	ft_strncpy(ret, s, len);
	ret[len] = '\0';
	return (ret);
}
