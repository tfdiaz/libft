/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:10:01 by tdiaz             #+#    #+#             */
/*   Updated: 2018/07/09 14:34:53 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*c_dst;
	unsigned char	*c_src;
	unsigned char	ch;
	size_t			i;

	i = 0;
	c_dst = (unsigned char*)dst;
	c_src = (unsigned char*)src;
	ch = (unsigned char)c;
	while (i < n)
	{
		c_dst[i] = c_src[i];
		if (ch == c_src[i])
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
