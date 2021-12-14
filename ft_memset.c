/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:46:21 by zmaziane          #+#    #+#             */
/*   Updated: 2021/11/24 20:34:56 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*cstr;

	cstr = (char *)b;
	i = 0;
	while (i < len)
	{
		cstr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
