/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:52:55 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/07 13:58:18 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*buff;
	t_list	*next;

	if (alst && *alst)
	{
		buff = *alst;
		while (buff)
		{
			next = buff->next;
			ft_lstdelone(&buff, (*del));
			buff = next;
		}
		*alst = NULL;
	}
}
