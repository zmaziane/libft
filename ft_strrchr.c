/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:17:54 by zmaziane          #+#    #+#             */
/*   Updated: 2021/11/15 00:58:51 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	i = 0;
	last = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			last = (char *) s + i;
		i++;
	}
	if (last)
		return (last);
	if (c == '\0')
		return ((char *)&s[i]);
	return ((char *)0);
}
