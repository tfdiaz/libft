/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:54:49 by tdiaz             #+#    #+#             */
/*   Updated: 2018/07/09 22:32:09 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char*)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (*str == ch)
			return ((void*)str);
		str++;
		i++;
	}
	return (NULL);
}
