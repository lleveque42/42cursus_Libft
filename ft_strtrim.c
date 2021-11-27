/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 23:15:08 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/28 00:45:27 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set && set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*dest;

	start = 0;
	end = ft_strlen(s1);
	i = 0;
	while (s1 && s1[start] && is_in_set(s1[start], set))
		start++;
	printf("start = %ld\n", start);
	printf("c end = %c\n", s1[end - 1]);
	while (s1 && is_in_set(s1[end - 1], set))
		end--;
	printf("c vrai end = %c\n", s1[end - 1]);
	printf("end = %ld\n", end);
	dest = malloc(sizeof(char) * (end - start + 1));
	printf("size = %ld\n", end - start + 1);
	if (!dest)
		return (NULL);
	while (s1 && s1[i] && (start + i) < end)
	{
		dest[i] = s1[start + i];
		i++;
	}
	dest[start + i] = '\0';
	printf("len final = %ld\n", ft_strlen(dest));
	return (dest);
}
