/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 14:20:13 by tdiaz             #+#    #+#             */
/*   Updated: 2018/07/10 19:31:06 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == '\0')
		return ((char*)haystack);
	if (len == 0)
		return (NULL);
	while (*haystack != '\0' && len != 0)
	{
		i = 0;
		while (haystack[i] == needle[i] && haystack[i] != '\0')
			i++;
		if (needle[i] == '\0' && i <= len)
			return ((char*)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
