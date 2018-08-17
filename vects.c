/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vects.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 19:40:44 by tdiaz             #+#    #+#             */
/*   Updated: 2018/08/16 19:40:49 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vect	*vect_add(t_vect *vect, char *str, size_t num_char)
{
	char *tmp;
	char *n_str;

	if (vect->cap < vect->len + ft_strlen(str))
	{
		while (vect->cap < vect->len + ft_strlen(str))
			vect->cap *= 2;
		n_str = ft_strnew(vect->cap);
		tmp = vect->str;
		vect->str = ft_memmove(n_str, vect->str, vect->len);
		if (tmp != NULL)
			free(tmp);
	}
	vect->len += ft_strlen(str);
	vect->str = ft_strcat(vect->str, str);
	vect->num_chars += num_char;
	return (vect);
}

void	vect_free(t_vect **vect)
{
	if (vect == NULL)
		return ;
	free((*vect)->str);
	free(*vect);
	*vect = NULL;
}

t_vect	*vect_new(size_t size)
{
	t_vect	*vect;

	vect = (t_vect*)malloc(sizeof(t_vect));
	if (!vect)
		return (NULL);
	vect->cap = size;
	vect->len = 0;
	vect->str = ft_strnew(size);
	return (vect);
}
