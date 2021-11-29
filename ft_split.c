/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 23:30:03 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/29 01:10:03 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	if (!c)
		return (1);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		count++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

static size_t	word_len(char const *s, char c, size_t	i)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	if (!c)
		return (ft_strlen(s));
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static size_t	ft_strcpy_split(char const *s, char *tab, size_t i, char c)
{
	size_t	j;

	j = 0;
	if (!c)
	{
		free(tab);
		tab = ft_strdup(s);
	}
	while (s && s[i] && s[i] == c)
		i++;
	while (s && s[i] && s[i] != c)
	{
		tab[j] = s[i];
		j++;
		i++;
	}
	tab[j] = '\0';
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	w;
	char	**tab;

	i = 0;
	j = 0;
	w = word_count(s, c);
	tab = malloc(sizeof(char *) * (w + 1));
	while (j < w)
	{
		tab[j] = malloc(sizeof(char) * (word_len(s, c, i) + 1));
		i = ft_strcpy_split(s, tab[j], i, c);
		j++;
	}
	tab[j] = 0;
	return (tab);
}
