/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:33:17 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/29 10:18:47 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	count_c;

	count_c = 0;
	while (*s)
	{
		if (*s == c)
			count_c++;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	if (count_c == 0)
		return (0);
	if (s)
		s--;
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (0);
}
