/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:12:12 by rbufnoir          #+#    #+#             */
/*   Updated: 2016/11/14 10:33:03 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenght_nb(int n)
{
	int	lenght;

	lenght = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		lenght++;
	while (n != 0)
	{
		lenght++;
		n /= 10;
	}
	return (lenght);
}

char		*ft_itoa(int n)
{
	int		size;
	char	*ret;

	size = lenght_nb(n);
	ret = (char*)malloc((size + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	ret[size] = '\0';
	while (size >= 0)
	{
		if (n < 0)
		{
			ret[size - 1] = (-(n % 10)) + '0';
			n /= 10;
			n *= -1;
			size--;
		}
		ret[size - 1] = (n % 10) + '0';
		n /= 10;
		size--;
	}
	if (ret[0] == '0' && ret[1] != '\0')
		ret[0] = '-';
	return (ret);
}
