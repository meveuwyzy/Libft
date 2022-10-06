/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 18:31:40 by student           #+#    #+#             */
/*   Updated: 2020/06/04 18:32:45 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;

	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	i = 1;
	while (s[i] != c)
	{
		if (s[i] == '\0')
		{
			if (s[0] == c)
				return ((char *)(s));
			else
				return (NULL);
		}
		i++;
	}
	return (ft_strrchr(s + i, c));
}
