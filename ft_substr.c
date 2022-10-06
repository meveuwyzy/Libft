/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 18:33:38 by student           #+#    #+#             */
/*   Updated: 2020/06/06 18:46:30 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t size)
{
	char	*substr;
	size_t	k;
	size_t	len_s;
	size_t	len_sub;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s < start)
		return (ft_strdup(""));
	k = len_s - start;
	if (k < size)
		len_sub = k;
	else
		len_sub = size;
	if ((substr = malloc((len_sub + 1) * sizeof(char))) == NULL)
		return (NULL);
	k = 0;
	while (len_sub--)
		substr[k++] = s[start++];
	substr[k] = '\0';
	return (substr);
}
