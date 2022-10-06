/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 18:22:52 by student           #+#    #+#             */
/*   Updated: 2020/06/04 18:22:59 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcat(char *dest, char *s, int n)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	if (n <= i)
		return (n + ft_strlen(s));
	while (s[j] && i + j < (n - 1))
	{
		dest[i + j] = s[j];
		j++;
	}
	dest[i + j] = '\0';
	return (ft_strlen(s) + i);
}
