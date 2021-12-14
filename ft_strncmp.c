/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:54:23 by zmaziane          #+#    #+#             */
/*   Updated: 2021/11/19 21:46:43 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*cst1;
	unsigned char	*cst2;

	cst1 = (unsigned char *)s1;
	cst2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (cst1[i] && cst2[i] && cst1[i] == cst2[i] && i < n - 1)
		i++;
	return (cst1[i] - cst2[i]);
}
