/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 18:25:54 by tdiaz             #+#    #+#             */
/*   Updated: 2018/07/10 18:43:06 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ltot;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ltot = ft_strlen(s1) + ft_strlen(s2) + 1;
	if ((str = (char*)malloc(sizeof(char) * ltot)) == NULL)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
