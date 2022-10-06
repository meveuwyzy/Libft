/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 18:10:50 by student           #+#    #+#             */
/*   Updated: 2020/06/06 18:45:54 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int	x;

	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	x = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		x = n * -1;
	}
	else
		x = n;
	if (x > 9)
		ft_putnbr_fd(x / 10, fd);
	ft_putchar_fd((x % 10 + '0'), fd);
}
