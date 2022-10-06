/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 17:50:17 by student           #+#    #+#             */
/*   Updated: 2020/06/04 17:51:07 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				ft_bzero(void *x, int n)
{
	int				i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)x;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}