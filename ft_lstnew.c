/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 14:58:24 by tdiaz             #+#    #+#             */
/*   Updated: 2018/07/11 18:56:07 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*tnew;

	tnew = (t_list*)malloc(sizeof(t_list));
	if (tnew == NULL)
		return (NULL);
	tnew->next = NULL;
	if (content == NULL || !content_size)
	{
		tnew->content = NULL;
		tnew->content_size = 0;
		return (tnew);
	}
	tnew->content = malloc(content_size);
	if (tnew->content == NULL)
	{
		free(tnew);
		return (NULL);
	}
	ft_memcpy((tnew->content), content, content_size);
	tnew->content_size = content_size;
	return (tnew);
}
