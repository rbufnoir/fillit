/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:39:45 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/07 13:45:57 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*lst_elem;

	lst_elem = (t_list *)malloc(sizeof(t_list));
	if (lst_elem == NULL)
		return (NULL);
	lst_elem->next = NULL;
	if (content == NULL)
	{
		lst_elem->content = NULL;
		lst_elem->content_size = 0;
		return (lst_elem);
	}
	lst_elem->content = (void*)malloc(sizeof(void) * content_size);
	if (lst_elem->content == NULL)
		return (NULL);
	ft_memcpy(lst_elem->content, content, content_size);
	lst_elem->content_size = content_size;
	return (lst_elem);
}
