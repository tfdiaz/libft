/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 17:38:44 by tdiaz             #+#    #+#             */
/*   Updated: 2018/07/09 17:52:16 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int	sgn;
	int digit;

	sgn = 1;
	if (n < 0)
		sgn = -1;
	digit = n % 10;
	if (digit != n)
	{
		ft_putnbr(n / 10);
		ft_putchar('0' + digit * sgn);
	}
	else
	{
		if (sgn < 0)
			ft_putchar('-');
		ft_putchar('0' + digit * sgn);
	}
}
