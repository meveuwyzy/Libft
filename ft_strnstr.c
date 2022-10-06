/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 18:28:34 by student           #+#    #+#             */
/*   Updated: 2020/06/04 18:31:15 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *str, const char *s, int n)
{
	int		i;
	size_t	x;

	x = ft_strlen(s);
	i = 0;
	if (ft_strlen(str) <= n)
		n = ft_strlen(str);
	if (x == '\0')
		return ((char*)str);
	while (i <= (int)(n - x))
	{
		if ((str[i] == s[0]) && (!ft_strncmp(str + i, s, x)))
			return ((char*)(str + i));
		i++;
	}
	return (NULL);
}
