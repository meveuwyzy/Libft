/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 17:57:43 by student           #+#    #+#             */
/*   Updated: 2020/06/04 17:57:59 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ordern(int n)
{
	int order;

	if (n < 0)
		return (ft_ordern(-n));
	order = 0;
	while (n >= 10)
	{
		n = n / 10;
		order++;
	}
	return (order);
}

static void	ft_setdigits(char *number, int n, int den)
{
	int digit;

	if (n < 0)
	{
		number[0] = '-';
		return (ft_setdigits(number + 1, -n, den));
	}
	digit = n / den;
	*number = (char)(digit + '0');
	if (den >= 10)
		return (ft_setdigits(number + 1, n % den, den / 10));
	else
		*(number + 1) = '\0';
}

char		*ft_itoa(int n)
{
	char	*number;
	int		den;
	int		i;
	int		order;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	order = ft_ordern(n);
	den = 1;
	i = 0;
	while (i++ < order)
		den = den * 10;
	if (n >= 0)
	{
		if ((number = malloc((order + 2) * sizeof(char))) == NULL)
			return (NULL);
		ft_setdigits(number, n, den);
		return (number);
	}
	if ((number = malloc((order + 3) * sizeof(char))) == NULL)
		return (NULL);
	ft_setdigits(number, n, den);
	return (number);
}
