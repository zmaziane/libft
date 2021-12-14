/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:40:02 by zmaziane          #+#    #+#             */
/*   Updated: 2021/11/23 18:47:01 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*rh;

	rh = malloc(count * size);
	if (!rh)
		return (NULL);
	ft_bzero(rh, count * size);
	return (rh);
}
