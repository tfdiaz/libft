/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 19:17:47 by tdiaz             #+#    #+#             */
/*   Updated: 2018/07/09 19:23:24 by tdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	sgn;
	int	digit;

	sgn = 1;
	if (n < 0)
		sgn = -1;
	digit = n % 10;
	if (n != digit)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd('0' + digit * sgn, fd);
	}
	else
	{
		if (sgn < 0)
			ft_putchar_fd('-', fd);
		ft_putchar_fd('0' + digit * sgn, fd);
	}
}
