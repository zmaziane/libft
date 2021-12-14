/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:00:29 by zmaziane          #+#    #+#             */
/*   Updated: 2021/11/22 21:29:43 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_word(const char *s, int c)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			r++;
			while (s[i] != c && s[i])
			{
				i++;
			}
			if (s[i] == '\0')
				break ;
		}
		i++;
	}
	return (r);
}

static int	ft_len(const char *s, char c, int x)
{
	int	i;

	i = 0;
	while (s[x] == c)
		x++;
	while (s[x] && s[x] != c)
	{
		x++;
		i++;
	}
	return (i);
}

static char	**ft_free(char **copy, int j)
{
	int	i;

	i = 0;
	if (j == 0)
	{
		free(copy);
		return (NULL);
	}
	while (i < j)
	{
		free (copy[i]);
		i++;
	}
	free (copy);
	return (NULL);
}

static	char	**ft_remplissage(char const *s, char **copy, int c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (j < ft_word(s, c))
	{
		copy[j] = malloc(sizeof (char) * ft_len(s, c, i) + 1);
		if (!(copy[j]))
			return (ft_free(copy, j));
		k = 0;
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			copy[j][k++] = s[i++];
		copy[j][k] = '\0';
		j++;
	}
	copy[j] = NULL;
	return (copy);
}

char	**ft_split(char const *s, char c)
{
	char	**copy;

	if (!s)
		return (NULL);
	if (!*s)
	{
		copy = malloc(sizeof (char *) * 1);
		if (!copy)
			return (NULL);
		copy[0] = NULL;
		return (copy);
	}
	copy = (char **)malloc(sizeof (char *) * ft_word(s, c) + 1);
	if (!copy)
		return (0);
	return (ft_remplissage(s, copy, c));
}
