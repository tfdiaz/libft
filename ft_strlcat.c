/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 21:14:46 by tdiaz             #+#    #+#             */
/*   Updated: 2018/07/09 21:43:11 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*e_dst;
	const char	*s_src;
	size_t		n;
	size_t		dlen;

	n = dstsize;
	s_src = src;
	e_dst = dst;
	while (n-- != 0 && *e_dst != '\0')
		e_dst++;
	dlen = e_dst - dst;
	n = dstsize - dlen;
	if (n == 0)
		return (dlen + ft_strlen(src));
	while (*s_src != '\0')
	{
		if (n != 1)
		{
			*e_dst++ = *s_src;
			n--;
		}
		s_src++;
	}
	*e_dst = '\0';
	return (dlen + (s_src - src));
}
