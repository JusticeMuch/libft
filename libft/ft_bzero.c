/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jronald <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 23:26:16 by jronald           #+#    #+#             */
/*   Updated: 2018/06/03 05:49:03 by jronald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*res;
	size_t	i;

	if (n > 0)
	{
		i = 0;
		res = (char*)s;
		while (i < n)
		{
			res[i] = '\0';
			i++;
		}
	}
}