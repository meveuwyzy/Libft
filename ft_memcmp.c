/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 18:02:32 by student           #+#    #+#             */
/*   Updated: 2020/06/04 18:04:24 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int							ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	const unsigned char		*ss1;
	const unsigned char		*ss2;

	if (n == 0)
		return (0);
	i = 0;
	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	while (*ss1 == *ss2 && ++i < n)
	{
		ss1++;
		ss2++;
	}
	return ((int)(*ss1 - *ss2));
}
