/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:03:04 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/07 14:07:34 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*buff;

	if (lst && (*f))
	{
		buff = lst;
		while (buff != NULL)
		{
			(*f)(buff);
			buff = buff->next;
		}
	}
}
