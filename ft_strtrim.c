/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 18:33:11 by student           #+#    #+#             */
/*   Updated: 2020/06/07 22:46:23 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	left;
	size_t	right;
	char	*s2;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	if (s1[i] != '\0')
		left = i;
	else
		return (ft_strdup("\0"));
	i = ft_strlen(s1);
	while (i != 0 && ft_strchr(set, s1[i]))
		i--;
	right = i;
	if ((s2 = malloc(right - left + 2)) == NULL)
		return (NULL);
	ft_strlcpy(s2, s1 + left, right - left + 2);
	return (s2);
}
