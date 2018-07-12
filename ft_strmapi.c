/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:44:29 by tdiaz             #+#    #+#             */
/*   Updated: 2018/07/10 17:50:53 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*snew;

	i = 0;
	if (s == NULL)
		return (NULL);
	snew = ft_strnew(ft_strlen(s));
	if (snew == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		snew[i] = f(i, s[i]);
		i++;
	}
	return (snew);
}
