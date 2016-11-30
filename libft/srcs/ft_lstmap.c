/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:08:30 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/14 09:44:48 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin;
	t_list	*new;

	if (lst == NULL && f == NULL)
		return (NULL);
	begin = NULL;
	new = NULL;
	while (lst != NULL)
	{
		if (begin == NULL)
		{
			begin = (*f)(lst);
			new = begin;
		}
		else
		{
			new->next = (*f)(lst);
			new = new->next;
		}
		lst = lst->next;
	}
	return (begin);
}
