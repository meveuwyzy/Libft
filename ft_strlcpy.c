/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 18:24:46 by student           #+#    #+#             */
/*   Updated: 2020/06/06 18:48:47 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcpy(char *dest, const char *src, int size)
{
	int	i;

	if (!src && !dest)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while ((*(src + i) != '\0') && (i < (size - 1)))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (ft_strlen(src));
}
