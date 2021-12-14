/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:02:52 by zmaziane          #+#    #+#             */
/*   Updated: 2021/11/15 00:54:42 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*c;

	if (!s1 && !s2)
		return (0);
	s = (unsigned char *) s1;
	c = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (s[i] != c[i])
			return (s[i] - c[i]);
	i++;
	}
	return (0);
}
