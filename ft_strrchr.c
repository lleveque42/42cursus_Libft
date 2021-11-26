/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:33:17 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/26 13:40:18 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	count_c;

	i = 0;
	count_c = 0;
	while (s && s[i])
	{
		if (s[i] == c)
			count_c++;
		i++;
	}
	if (c == 0)
		return ((char *)&s[i]);
	if (count_c == 0)
		return (0);
	if (s)
		i--;
	while (s && s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
