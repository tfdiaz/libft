/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 17:20:36 by tdiaz             #+#    #+#             */
/*   Updated: 2018/07/11 19:00:51 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*cpy;
	t_list	*lt;

	while (lst)
	{
		lt = f(lst);
		cpy = lt;
		while (lst->next)
		{
			lst = lst->next;
			if (!(lt->next = f(lst)))
			{
				free(lt->next);
				return (NULL);
			}
			lt = lt->next;
		}
		return (cpy);
	}
	return (NULL);
}
